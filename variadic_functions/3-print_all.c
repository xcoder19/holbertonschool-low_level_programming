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

			printf("%c\n", c);

			break;
		case 'f':
			j = va_arg(ap, double);
			printf("%f\n", j);
			break;
		case 's':
			str = va_arg(ap, char *);
			printf("%s\n", str);
			break;

		case 'i':
			k = va_arg(ap, int);
			printf("%d\n", k);
			break;

		default:
			break;
		}

		i++;
	}
	va_end(ap);
}
