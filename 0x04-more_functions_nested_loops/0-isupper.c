#include "main.h"

/**
 * _isupper - Check for uppercase character
 *
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper()
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
