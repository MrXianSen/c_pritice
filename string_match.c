#include "string_match.h"

/*
	×Ö·û´®Æ¥Åä--ÆÓËØËã·¨
	@param s Ô´×Ö·û´®
	@param len_s sµÄ³¤¶È
	@param p ±»Æ¥ÅäµÄ×Ö·û´®
	@param len_p ×Ö·û´®pµÄ³¤¶È
	@return 
			i  Æ¥Åä³É¹¦£¬sÖĞµÄ¿ªÊ¼Î»ÖÃ
			-1 Æ¥ÅäÊ§°Ü
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
	Rabin-KarpËã·¨
*/
int string_match_rk(char *s, int len_s, char const *p, int len_p)
{

}