#include "main.h"
#include <stdlib.h>
/**
 * File: 0-create_array.c
 * Author: Victor Uwaoma
 * Create_array - create array of size size and assign char c
 * @size: Size of the array
 * @c: char to assign
 * Description: Create an array of size size and assign char c
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)

{

	char *str;

	unsigned int i;



	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)

		return (NULL);



	for (i = 0; i < size; i++)

		str[i] = c;

	return (str);

}
