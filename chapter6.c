#include "HEAD.h"

/*
	在source中查询chars中出现的字符
*/
char *find_char(char const *source, char const *chars)
{
	if (source == NULL || chars == NULL)
		return NULL;
	while (*chars != '\0')
	{
		char temp = *chars;
		char *result = source;
		while (*result != '\0')
		{
			if (temp == *result)
			{
				return result;
			}
			*result++;
		}
		*chars++;
	}
	return NULL;
}

int del_substr(char *str, char const *substr)
{

}