#include "main.h"
/**
 *print _last_digit in main.h
 *numbers are written to base 10 
 *Doing r%10 should give the ones digit
*/
int print_last_digit(int r)
{
	int val;
		
	if (r < 0)
		val = (r % 10) * -1;
	
	else
		val = r % 10;
	
	_putchar(val);
	return (val)
}
