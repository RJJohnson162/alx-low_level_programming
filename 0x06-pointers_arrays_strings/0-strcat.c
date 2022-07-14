#include "main.h"

 /**
  * _strcat - this is a function strcat
  * @dest: parameter
  * @src: parameter
  * Return: dest string
  */

 char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}