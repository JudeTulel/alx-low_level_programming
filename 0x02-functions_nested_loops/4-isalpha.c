;#include "main.h"

/**
 *_isalpha in main.h
 *c is the input var
 *Return 1 If letter upper or lowercase
 *Else Return 0
*/
int _isalpha(int c)
{
	char lower,upper;
	int letter = 0;
	
	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper ='A';upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				letter = 1
		}
	}
	return (letter)
