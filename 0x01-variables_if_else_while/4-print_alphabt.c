#include <stdio.h>
/**
 * main - main block
 * Description: get a random number and check its
 * return: 0
 */
int main(void)
{
	char c = 'a';
	
	while (c <= '2')
	{
		if (c != 'e' && c !='q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
