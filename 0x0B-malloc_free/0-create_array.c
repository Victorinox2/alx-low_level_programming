#include "main.h"
#include <stdlib.h>
		
/**
 * File: 0-create_array.c
 * Author; Victor Uwaoma		
 * create_array - create an array of size size and assign char c
		
 * @size: size of array
		
 * @c: char to assign
		
 * Description: creat an array of size size and assign char c
		
 * Return: pointer to array, NULL if fail
 */
 
		
char *create_array(unsigned int size, char c)
{
	char *s = malloc(size * sizeof(char));
	unsigned int i = 0;

	if (size == 0 || s == 0)
	{
		return ('\0');
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
	free(s);
}
