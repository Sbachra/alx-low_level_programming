#include <stdarg.h>
#include <stdio.h>

/**
 * print_all -  a function that prints anything.
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list list;
	char *s, *sep = "";

	if (format)
	{
		va_start(list, format);
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					s = va_arg(list, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
		va_end(list);
	}
	printf("\n");
}
