#include "main.h"
/**
 *print_last_digit - Check main.c
 * @r: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number r
*/
int print_last_digit(int n)
{
	int val;
		
	if (n < 0)
		val = (n % 10) * -1;
	
	else
		val = n % 10;
	
	_putchar(val);
	return (val)
}
