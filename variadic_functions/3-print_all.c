#include "variadic_functions.h"
/**
 * print_all - print anything
 * @format: format
 */
void print_all(const char *const format, ...)
{
	char *str, c;
	int k;
	float j;

	unsigned long i = 0;

	va_list ap;

	va_start(ap, format);

	while (i < strlen(format))
	{
		switch (format[i])
		{

		case 'c':
			c = va_arg(ap, int);

			printf("%c", c);

			break;
		case 'f':
			j = va_arg(ap, double);
			printf("%f", j);
			break;
		case 's':

			str = va_arg(ap, char *);
			if (str != NULL)
			{
				printf("%s", str);
			}

			printf("%s", "(nil)");

			break;

		case 'i':
			k = va_arg(ap, int);
			printf("%d", k);
			break;

		default:
			break;
		}

		if (i < strlen(format) - 1)
		{
			putchar(',');
			putchar(' ');
		}

		i++;
	}
	putchar('\n');
	va_end(ap);
}
