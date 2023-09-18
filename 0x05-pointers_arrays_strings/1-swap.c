#include "main.h"
/**
*swap_int  - a fuction that swaps the values of two integers
*@a: An output character
*@b:an input character
*Return: Always 0
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;

}
