#include "main.h"
/**
 * print_string - print fprmated string
 * 
 * @argg: arguments
 * 
 * @return int 
 */
int print_string(va_list ph)
{
        char *str;

        str = va_arg(ph, char *);
        if (str == NULL)
        {
                str = "(null)";
                return (write(1, str, strlen(str)));
        }
        return (write(1, str, strlen(str)));
}