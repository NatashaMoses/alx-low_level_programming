#include "main.h"

/**
 * print_sign - program that prints the sign of a number
 * @n: the integer to be checked
 * Return: 1 and prints + if n is greater than zero
 * return 0 and prints 0 if n is zero
 * return -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('_');
	}
		return (-1);
}
