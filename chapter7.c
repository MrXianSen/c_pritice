#include "HEAD.h"

/*
	厄密多项式
	Hn(x) = |- 1, n <= 0;
			|- 2*x, n == 1;
			|- 2*x*Hn-1(x) - 2(n-1)Hn-1(x), n >= 2;
*/
int hermite(int n, int x)
{
	if (n <= 0) return 1;
	if (n == 1) return 2 * x;
	return 2 * x * hermite(n - 1, x) - 2 * (n - 1) * hermite(n - 2, x);
}

/*
	将字符串数组转化为整数
	不考虑溢出情况，字符串中如果出现了非数字直接返回0
*/
int ascii_to_integer(char *string)
{
	int result = 0;
	while (*string)
	{
		if (!isdigit(*string)) return 0;
		int curr = *string - '0';
		result = 10 * result + curr;
		string++;
	}
	return result;
}

int max_list(int values, ...)
{
	va_list var_arg;
	int max = 0;
	/*
		准备访问可变参数
	*/
	va_start(var_arg, values);
	int curr = 0;
	while (curr = va_arg(var_arg, int) > 0)
	{
		if (curr > max) max = curr;
	}
	va_end(var_arg);
	return max;
}