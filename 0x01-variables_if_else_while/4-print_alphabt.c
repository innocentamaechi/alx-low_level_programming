#include <stdio.h>

/**
 * main - this program prints the alphabt excluding the letters q and e
 *
 * return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for(letter = 'a'; letter <= 'z'; letter++)
	{
		if(letter == 'e' || letter == 'q')
			continue;

		putchar(letter);
	}

	putchar('\n');

	return (0);
}
