void _print_rev_recursion(char *s)
{

	if (*s != s[0])
	{
		putchar(*s);
	}

	_print_rev_recursion(s + 1);
}