#include "main.h"

/**
 *print_alphabet_x10 - Check main.h
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 0
 */
int print_alphabet_x10(void)
{
	char i;
	int j;
	for (j = 0; j < 10; j++)
	{
		for(i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
    return (0);
}
