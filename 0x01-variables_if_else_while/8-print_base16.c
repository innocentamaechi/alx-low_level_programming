#include <stdio.h>

/**
 * manin - this program convert and prints all base 16 numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	for (num = 'a'; num <= 'f'; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
