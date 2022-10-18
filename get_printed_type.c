#include "main.h"

/**
 * get_printed_function - determine the printed function
 * @format: formated string
 * Return: pointer to function
 */

int (*get_printed_function(const char *format))(va_list)
{
        sp_t m[] = {
        {"%c", print_char},
        {"%s", print_string},
        {NULL, NULL}
        };
        int i;

        i = 0;
        while(m[i].sp)
        {
            if (m[i].sp[0] == format[i] && m[i].sp[1] == format[i + 1])
                    return (m[i].fun);
            i++;
        }
        return (NULL);
}