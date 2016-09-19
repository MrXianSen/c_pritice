#include "string_match.h"

/*
	字符串匹配--朴素算法
	@param s 源字符串
	@param len_s s的长度
	@param p 被匹配的字符串
	@param len_p 字符串p的长度
	@return 
			i  匹配成功，s中的开始位置
			-1 匹配失败
*/
int string_match_simple(char *s, int len_s, char const *p, int len_p)
{
	if (len_p > len_s)
	{
		return -1;
	}
	int end = len_s - len_p;
	for (int i = 0; i <= end; i++)
	{
		int j = 0;
		int k = i;
		while (s[k+j] == p[j] && p[j] != '\0')
		{
			j++;
		}
		if (j == len_p)
		{
			return i+1;
		}
	}
	return -1;
}

/*
	Rabin-Karp算法
	@param T 主串
	@param P 子串
	@param d 基数
	@param q 除数
	@return
			i  匹配成功，s中的开始位置
			-1 匹配失败

	t[s+1] = (d(t[s] - T[s+1] * h) + T[s + m + 1]) % q
*/
int string_match_rk(char *T, int n, char const *P, int m, int d, int q)
{
	int h = pow(d, m - 1);
	int t[MAX];
	int v;
	t[0] = 0;
	int p = 0;
	for (int i = 0; i < m; i++)
	{
		p = (d * p + P[i]) % q;
		t[0] = (d * t[0] + T[i]) % q;
	}

	for (int i = 0; i < n - m; i++)
	{
		if (p == t[i])
		{
			for (int j = 0; j < m; j++)
			{
				if (P[i] != T[j]) break;
				else if (j == m - 1)
				{
					v = i;
					return v;
				}
				else
				{
					i++;
				}
			}
		}
		if (i < n - m)
		{
			t[i + 1] = (d * (t[i] - T[i + 1] * h) + T[i + m + 1]) % q;
		}
	}
	return -1;
}