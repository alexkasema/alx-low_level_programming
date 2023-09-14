#include "variadic_functions.h"
/**
 * print_all-A function that prints anything.
 *@format: A list of types of arguments passed to the function
 *Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *holder;
	va_list _print;

	va_start(_print, format);

	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(_print, int));
				break;
			case 'i':
				printf("%d", va_arg(_print, int));
				break;
			case 'f':
				prinf("%f", (float) va_arg(_print, double));
				break;
			case 's':
				holder = va_arg(_print, char *);
				if (holder != NULL)
				{
					printf("%s", holder);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(_print);
	printf("\n");
}
