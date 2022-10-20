#include "main.h"
/**
 * print_int - print a an integer or decimal number to stdout
 * @argg: va_list argument
 * Return: size of byte write
 */
int print_int(va_list argg)
{
	int c;

	c = va_arg(argg, int);
	return (write(1, &c, sizeof(c)));
}
