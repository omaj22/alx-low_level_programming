#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int)) c = 1;
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int)) c = 1;
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double)) c = 1;
					break;
				case 's':
					str = va_arg(list, char *) c = 1;
					if (!str)
					{
						printf("(nill)");
						break;
					}
					printf("%s", str);
					break;
			}
			i++;
		}
			sep = ", ";
			i++;
		}
	printf("\n"), va_end(list);
}
