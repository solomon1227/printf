#include "main.h"
#include <stdio.h>
/**
 * print_binary - print a binary in to stdout
 * @argg: argument
 * Return: size of byte write
 */
int print_binary(va_list argg)
{
	int n, mod;

	n = va_arg(argg, int);
	while (n >= 2)
	{
		mod = n % 2;
		write(1, &mod, 1);
		n = n / 2;
	}
	write(1, &n, 1);
	putchar('\n');
	return (sizeof(n));
}
