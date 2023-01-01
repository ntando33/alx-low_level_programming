#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: The character to be checked
 * Return: 1 for aphabetic character or 0 for anything alse
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <=122))
	{
	return (1);
	}
	return (0);
}
