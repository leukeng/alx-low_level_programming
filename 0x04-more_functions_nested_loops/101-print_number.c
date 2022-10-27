#include <stdio.h>
#include "main.h"
#include <stdio.h>

/**
* print_number - Prints a number
* @n: The number t0 print
*/

 * print_number - Prints an integer.
 * @n: The integer to prints.
 *
 * Return: Nothing!
 */
void print_number(int n)
{
	unsigned int num = n;
	unsigned int k = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}
	if (num > 9)
	{
		print_number(num / 10);
		n *= -1;
		k = n;
		_putchar('-');
	}
	putchar(num % 10 + '0');

	k /= 10;

	if (k != 0)
		print_number(k);

	_putchar((unsigned int) n % 10 + '0');

}
0 comments on commit 4ff5e87
