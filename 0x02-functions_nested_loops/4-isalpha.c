#include "main.h"
/**
 * _islower - a functions that checks for lower case.
 * @c: An input character
 * Return: 1 if c is lowercase or uppercase, 0 if otherwise
*/
int _isalpha(int c)
{
char i;
int alpha = 0;
for (i = 'a'; i <= 'z';  i = 'A'; i <= 'Z'; i++)
{
if (i == c)
alpha = 1;
}
return (alpha);
}