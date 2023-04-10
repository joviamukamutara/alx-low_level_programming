#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memcpy - function that copies n bytes from memory area src to memory area dest.
 *
 * @dest: pointer to the destination array where the content is to be copied.
 * @src: pointer to the source of data to be copied.
 * @n: number of bytes to be copied.
 *
 * Return: pointer to destination array.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}

