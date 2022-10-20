#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: printing alphabet
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i, b;

	for (i = '0'; i <= '9'; i++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
	_putchar('\n');
	}
}
main.h
#ifndef main_h
#define main_h

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);

#endif
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)

{
	return (write(1, &c, 1));
}
