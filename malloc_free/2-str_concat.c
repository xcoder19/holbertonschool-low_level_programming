#include <string.h>

char *str_concat(char *s1, char *s2)
{
	int i;
	char *arr;
	arr = (char *)malloc(sizeof(char) * (strlen(s2) + strlen(s1) + 2));
	i = 0;
	while (arr != NULL)
	{

		*arr++ = *s1++;
	}

	while (arr != NULL)
	{
		*arr++ = *s2++;
	}
}