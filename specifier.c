#include "main.h"

/**
 * get_specifier - finds the format function
 * @str: the format string
 * Return: the number of bytes printed
 */

int (*get_specifier(char *str))(va_list ap, params_t *params)
{
specifier_t_specifiers[] = {
{"c", print_char},
{"d", print_int},
{"i", print_int},
{"s", print_string},
{"%", print_percent},
{"b", print_binary},
{"o", print_octal},
{"u", print_unsigned},
{"x", print_hex},
{"X", print_HEX},
{"p", print_address},
{"S", print_S},
{"r", print_rev},
{"R", print_rot13},
{NULL, NULL}
};
int i = 0;
while (specifiers[i].specifier)
{
if (*str == specifiers[i].specifier[0])
{
return (specifier[i].f);
}
i++;
}
return (NULL);
}
