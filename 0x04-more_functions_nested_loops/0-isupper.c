#include "main.h"

/**
 * _isupper - Check for uppercase character
 * @c: int to be checked
 * Return: 1 if uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 64 && c <= 91)
	{
	return (1);
	}
	return (0);
}
