#include "main.h"
/**
 * _isalpha - checks if it is an alphabet.
 * @c: character to check
 * return: 1 if it is alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	   (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
