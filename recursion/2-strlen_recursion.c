int _strlen_recursion(char *s)
/**
 * @s: pointer to string
 * Return len of s array
 */
{

	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}

	return (0);
}
