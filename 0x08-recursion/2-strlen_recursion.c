#include "main.h"
/**
 * _strlen_recursion - Function that returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int nat = 0;

	if (*s)
	{
		nat++;
		nat += _strlen_recursion(s + 1);
	}

	return (nat);
}
