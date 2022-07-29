#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of the string
 * @str: string to copy
 *
 * Return: pointer to copy of the string passed
 */
char *_strdup(char *str)
{
	char *stcpy;

	if (str == NULL)
		return (NULL);
	stcpy = malloc(sizeof(str));
	*stcpy = *str;
	return stcpy;
}
