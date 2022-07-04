#include "variadic_functions.h"

/**
 * print_char - print char
 * @ap: list
 */

void print_char(va_list *ap)
{
	char c;

	c = va_arg(*ap, int);
	printf("%c", c);
}
/**
 * print_int - print int
 * @ap:list
 */
void print_int(va_list *ap)
{
	int i;

	i = va_arg(*ap, int);
	printf("%d", i);
}
/**
 * print_float - print float
 * @ap: list
 */
void print_float(va_list *ap)
{
	float f;

	f = va_arg(*ap, double);
	printf("%f", f);
}
/**
 * print_str - print str
 * @ap: list
 */
void print_str(va_list *ap)
{
	char *str;

	str = va_arg(*ap, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}

	printf("%s", str);
}
/**
 * print_all - print anything
 * @format: format
 */
void print_all(const char *const format, ...)
{
	int m;
	float j;
	unsigned long i = 0;
	va_list ap;

	va_start(ap, format);
	while (i < strlen(format) && format != NULL)
	{
		m = 1;
		switch (format[i])
		{
		case 'c':
			print_char(&ap);
			break;
		case 'f':
			j = va_arg(ap, double);
			printf("%f", j);
			break;
		case 's':
			print_str(&ap);
			break;
		case 'i':
			print_int(&ap);
			break;
		default:
			m = 0;
			break;
		}
		if (i < strlen(format) - 1 && m)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	va_end(ap);
}
