unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	while (*s != '\0')
	{

		while (*accept != '\0')
		{
			if (*accept == *s)
			{
				i++;
			}
			accept++;
		}
		s++;
	}

	return (i);
}