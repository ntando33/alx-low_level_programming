#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit number of base 10
 * starting from 0, following by anew line
 * Return: 0
 */
int main(void)
{
	char c ='2';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return(0);
}
