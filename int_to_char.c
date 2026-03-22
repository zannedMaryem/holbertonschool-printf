#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * int_to_char - function that converts integers to characters
 * @n: integer to convert
 * Return: number of integers printed
 */
int int_to_char(int n)
{
	char tab[12];
	int i = 0;
	unsigned int num;
	int length;

	if (n < 0)
	{
		write(1, "-", 1);
		length++;
		num = -n;
	}
	else
	{
		num = n;
	}
	do
	{
		tab[i++] = (num % 10) + '0';
		num /= 10;
	} while (num > 0);
	while (i--)
	{
		write(1, &tab[i], 1);
		length++;
	}
	return(length);
}