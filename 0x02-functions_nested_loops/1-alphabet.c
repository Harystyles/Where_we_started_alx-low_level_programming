#include "main.h"
/**
* print_alphabet - to print alphabets
* Return: always 0 to success
*/
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
