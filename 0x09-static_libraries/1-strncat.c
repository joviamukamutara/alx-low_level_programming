#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to be used from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    return (strncat(dest, src, n));
}

