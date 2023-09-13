#include "main.h"
/**
 * _islower(int c) - a functions that checks for lower case.
 * @c: An input character
 * Return: 1 if c is lowercase, 0if otherwise
*/
int _islower(int c)
{
char i;
int lower = 0;
for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
lower = 1;
}
return (lower);
}
