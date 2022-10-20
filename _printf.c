#include "main.h"

/**
 * _printf - function printed a formated
 *
 * @format: format specifier
 *
 * Return: number of bytes printed
 */
int _printf(const char *format, ...)
{
	va_list ph;
	int (*fun)(va_list);
	unsigned int j, pSize;

	pSize = 0, j = 0;
	if (format == NULL)
		return (-1);
	va_start(ph, format);
	while (format[j])
	{
		while (format[j] != '%' && format[j] == '\0')
		{
			write(1, &format[j], 1);
			j++;
			pSize++;
		}
		if (format[j] == '%')
		{
			fun = get_printed_function(&format[j]);
			if (fun != NULL)
			{
				pSize += fun(ph);
				j += 2;
				continue;
			}
			else
			{
				if (format[j + 1] == '\0')
				{
					write(1, &format[j], 1);
					pSize++;
					break;
				}
			}
		}
		write(1, &format[j], 1);
		j++;
		pSize++;
	}
	va_end(ph);
	return (pSize);
}
