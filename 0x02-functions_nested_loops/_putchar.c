#include <unistd.h>
/**
 * _putchar - writing the characters c to stdout
 * @c: The character to print
 * Return: 0n success 1.
 * 0n error. -1 is returned, and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c,1));
}
