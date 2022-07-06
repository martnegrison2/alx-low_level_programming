#include "main.h"

/**
 *  *  *print_alphabet_x10 - 10 times Alphabet in lowercase
 *
 *   *   *
 *
 *    *    *Return:0
 *
 *     *     *
 *
 */

void print_alphabet_x10(void)
{
	char d;
	int a = 0;

	while (a < 10)
	{
		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
		a++;
	}
}
