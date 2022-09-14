#include "main.h"
/**
 *print_sign(Int c) in main.h
 *input is Int c
 *Return 1 and print + n > 0
 *Return -1 and print - n < 1
 *Return 0 and print 0 n == 0
*/
int print_sign(int c)
{
	int value;
	
	if (n > 0)
	{
		_putchar('+');
		value = 1;
	}
	
	else if (n == 0)
	{
		_putchar('0');
		value = 0;
	}
	
	else
	{
		_putchar('-');
		value = -1;
	}
	
	return (value);
