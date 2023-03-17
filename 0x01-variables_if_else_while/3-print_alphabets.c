#include <stdio.h>

/**
 * main - print characters 'a' to 'z' then 'A' to 'Z'
 *
 * Return: 0 always
 */
int main(void)
{
	char c = 'a';

	while putchar(c++) < 'z')
		;
	char C = 'A';

	while putchar(C++) < 'Z')
		;
	putchar('\n')
	return (0)
}
