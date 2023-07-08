#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the char c to the stdout
 * @c: The character to be printed
 *
 * Return: On success return 1.
 * On error, -1 is returned, and errno is set accordinly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
