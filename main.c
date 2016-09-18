#include "string_match.h"


int main()
{
	char src[] = "ABCDEF";
	char chars[] = "ABC";
	printf("%d\n", string_match_simple(src, 6, chars, 3));
	system("PAUSE");
	return 0;
}