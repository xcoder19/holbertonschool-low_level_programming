unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int k, j;

	for (j = 0; *s != '\0'; j++)
	{
		for (k = 0; *s != '\0'; k++)
		{
			if (s[j] == *(s + k))
			{
				i++;
			}
		}
	}

	return (i);
}