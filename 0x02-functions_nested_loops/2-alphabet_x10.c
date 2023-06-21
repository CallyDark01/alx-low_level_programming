#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Make alphabet x10 times.
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int i;
	i = 0;
	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar("%c ", c);
		}
		_putchar('\n');
	}
}
