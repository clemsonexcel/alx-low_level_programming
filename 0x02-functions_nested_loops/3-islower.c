#include "main.h"

/**
 * _is lower - checks for lower case
 * @c: character to be checked.
 * return: 1 on success, 0 otherwise
 */

int _lower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}
