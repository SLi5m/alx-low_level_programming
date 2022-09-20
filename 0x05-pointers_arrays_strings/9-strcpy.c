#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: destination of the string
 * @src: source of the string
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
char *point_dest = dest;

while (*src)
{
*dest++ = *src++;
*dest = 0;
}
return (point_dest);
}
