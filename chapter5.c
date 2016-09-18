#include "HEAD.h"

/*
	将n的二进制数反转输出
	且结果不依赖与机器的整型长度
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
