#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
/**
 * _printf - function that produces output according to a format.
 * @format: The format string is composed of zero or more directives.
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i = 0, index = 0;
	va_list argument;
	char c;
	char *string;
	int number, length_number;

	va_start(argument, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				va_end(argument);
				return (-1);
			}
			if (format[i] == 's')
			{
				string = va_arg(argument, char *);
				if (string == NULL)
				{
					write(1, "(null)", 6);
					index += 6;
				}
				else
				{
					write(1, string, strlen(string));
					index += strlen(string);
				}
			}
			else if (format[i] == 'c')
			{
				c = (char)va_arg(argument, int);
				write(1, &c, 1);
				index++;
			}
			else if (format[i] == 'i' || 'd')
			{
				number = va_arg(argument, int);
				length_number = int_to_char(number);
				index += length_number;
			}
			else if (format[i] == '%')
			{
				write(1, "%", 1);
				index++;
			}
			else
			{
				write(1, "%", 1);
				write(1, &format[i], 1);
				index += 2;
			}
		}
		else
		{
			write(1, &format[i], 1);
			index++;
		}
		i++;
	}
	va_end(argument);
	return (index);
}
