#include <stdio.h>

/**
 * main - prints all the posible combination
 *
 * Return: Always 0 (Success)
 */
7
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);

}
