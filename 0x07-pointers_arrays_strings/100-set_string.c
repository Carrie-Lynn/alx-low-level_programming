#include "main.h"
#include <stdio.h>

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: the pointer to pointer we need to set to
 * @to: the string to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
