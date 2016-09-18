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
*/
int string_match_rk(char *s, int len_s, char const *p, int len_p)
{

}