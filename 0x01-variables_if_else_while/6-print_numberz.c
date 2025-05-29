#include <stdio.h>

/**
 * main - This program prints all the digits using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for(num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}

	putchar('\n');

	return (0);
}
