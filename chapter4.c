#include "HEAD.h"

/*
	判断一个年份是不是闰年
*/
int is_leap_year(int year)
{
	int is_leap = 0;
	if (year % 4 == 0 && year % 100 != 0)
	{
		is_leap = 1;
	}
	if (year % 400 == 0)
	{
		is_leap = 1;
	}
	return is_leap;
}

/*
	求一个数的平方根的近似值
*/
float square(float n)
{
	if (n < 0)
	{
		return -1;
	}
	float new_guess = 1;
	float last_guess = 0;
	while (last_guess != new_guess)
	{
		last_guess = new_guess;
		new_guess = (last_guess + (n / last_guess)) / 2;
	}
	return new_guess;
}

int isPrime(int n)
{
	if (n < 2)
	{
		return 1;
	}
	int result = 1;
	for (int i = 2; i <= n/2; i++)
	{
		if (n % i == 0)
		{
			result = 0;
			break;
		}
	}
	return result;
}

/*
	打印n以内的质数
*/
void printPrimes(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (isPrime(i))
		{
			printf("%d\n", i);
		}
	}
}

/*
	从src中复制n个字符到dst中
*/
void copy_n(char dst[], char src[], int n)
{
	int src_index = 0;
	int dst_index = 0;
	for (; dst_index < n; dst_index++)
	{
		dst[dst_index] = src[src_index];
		if (src[src_index] != 0)
		{
			src_index += 1;
		}
		dst[n] = '\0';
	}
}

/*
	从src中截取len长度的子串保存在dst中
	函数中没有保证start+len的长度小于src的字符串长度
	需要外部保证
*/
void substr(char dst[], char src[], int start, int len)
{
	int dst_index = 0;
	while (dst_index < len)
	{
		dst[dst_index++] = src[start++];
	}
	// 结束字符
	dst[dst_index] = '\0';
}

/*
	从string中删除空格符
*/
void deblank(char string[])
{
	int count = 0;
	//计算字符串的长度
	while (string[count] != '\0') count++;
	for (int i = 0; i < count; i++)
	{
		if (string[i] == ' ')
		{
			for (int j = i + 1; j < count; j++)
			{
				string[j - 1] = string[j];
			}
			count--;
		}
	}
	string[count] = '\0';
}