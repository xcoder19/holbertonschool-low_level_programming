#include "main.h"
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *arr;
	int len = _strlen(needle);

	i = 0;
	j = 0;
	while (haystack[i] != '\0' && needle[j] != '\0')
	{

		if (haystack[i] == needle[i])
		{
			i++;
			j++;
			arr = haystack;
		}
		else
		{
			j = 0;
			i++;
		}
	}
	printf("this is %d\n", j);
	printf("this is %d\n", len);

	if (j == len)
	{

		printf("%s", arr);
		return (arr);
	}

	return NULL;
}
