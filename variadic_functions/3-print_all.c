#include "variadic_functions.h"
/**
 * print_all - print anything
 * @format: format
 */
void print_all(const char *const format, ...)
{
	char *str, c;
	int k, m;
	float j;

	unsigned long i = 0;

	va_list ap;

	va_start(ap, format);

	while (i < strlen(format))
	{
		k = 1;
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
				break;
			}

			printf("%s", "(nil)");
			break;
		case 'i':
			k = va_arg(ap, int);
			printf("%d", k);
			break;

		default:
			k = 0;
			break;
		}

		if (i < strlen(format) - 1 && k)
		{
			putchar(',');
			putchar(' ');
		}

		i++;
	}
	putchar('\n');
	va_end(ap);
}
