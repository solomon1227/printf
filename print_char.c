#include "main.h"
/**
 * @print_char - print a char in to stdout
 * 
 * Return: size of byte write 
 */
int print_char(va_list argg)
{
        char c;        

        c = va_arg(argg, int);
        return (write(1, &c, 1));
}