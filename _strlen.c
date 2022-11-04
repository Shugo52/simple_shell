#include "main.h"

/**
 * _strlen - returns string length
 *
 * @s: character
 * @i - integer
 *
 * Return: returns lenght
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}



/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
int _putchar(char c)
{
		return (write(1, &c, 1));
}
