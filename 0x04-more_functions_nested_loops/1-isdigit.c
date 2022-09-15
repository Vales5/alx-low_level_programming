#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if input is digit between 0 - 9
 *
 * @c: checks input
 *
 * Return: 1 if 'c' is digit 
 *         0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
		return (0);
}
