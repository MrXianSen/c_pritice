#include "string_match.h"

/*
	�ַ���ƥ��--�����㷨
	@param s Դ�ַ���
	@param len_s s�ĳ���
	@param p ��ƥ����ַ���
	@param len_p �ַ���p�ĳ���
	@return 
			i  ƥ��ɹ���s�еĿ�ʼλ��
			-1 ƥ��ʧ��
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
	Rabin-Karp�㷨
	@param T ����
	@param P �Ӵ�
	@param d ����
	@param q ����
	@return
			i  ƥ��ɹ���s�еĿ�ʼλ��
			-1 ƥ��ʧ��

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