#include <stdio.h>
/**
 * main - main block
 * description: prints all single digit number of base 10
 * starting from 0, following by new line.
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
