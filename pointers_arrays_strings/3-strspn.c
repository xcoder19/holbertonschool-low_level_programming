unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	while (*accept != '\0')
	{

		while (*s != '\0')
		{
			if (*s == *accept)
			{
				i++;
			}
			s++;
		}
		accept++;
	}

	return (i);
}