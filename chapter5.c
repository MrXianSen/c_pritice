#include "HEAD.h"

/*
	��n�Ķ���������ת���
	�ҽ������������������ͳ���
*/
unsigned int reverse_bits(unsigned int n)
{
	unsigned int answer = 0;
	unsigned int i;
	for (i = 1; i != 0; i <<= 1)
	{
		answer <<= 1;
		if (n & 1)
		{
			answer |= 1;
		}
		n >>= 1;
	}
	return answer;
}
