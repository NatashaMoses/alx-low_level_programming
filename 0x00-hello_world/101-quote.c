#include <stdio.h>
#include <unistd.h>
/**
 * main - function that prints the output without using puts nor printf
 * Return: 1 (means success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
