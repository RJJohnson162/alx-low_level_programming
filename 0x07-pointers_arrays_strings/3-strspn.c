#include "main.h"

/**
 * _strspn - function gets the lenght of a prefix substring
 * @s: string to be checked
 * @accept: string to check against
 * Return: gives number of bytes of s in accept
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int a, b;

for (a = 0; s[a]; a++)
{
for (b = 0; accept[b]; b++)
{
if (s[a] == accept[b])
break;
}
if (!accept[b])
break;
}
return (a);    
}
