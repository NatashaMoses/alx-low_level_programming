#include "main.h"

/**
 * _islower - checks if character is lowercase
 * @c: The character tocheck
 * Return: 1 for lowercase character or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
