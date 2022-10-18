#include "main.h"

/**
 * _is lower - checks for lowercase
 * @c: character to be checked.
 * return: 1 if char is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
