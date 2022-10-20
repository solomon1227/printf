#include "main.h"
/**
 * print_string - print fprmated string
 *
 * @ph: va_list argument
 *
 * Return: byte size
 */
int print_string(va_list ph)
{
	char *str;
	int len, i;

	str = va_arg(ph, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	len = strlen(str);
	for (i = 0; i < len; i++)
		_putchar(str[i]);
	return (len);
}
