#include "main.h"

/**
 * _isdigit - Check digits (0 through 9)
 * @c: int type
 * Return: 1 if digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}

