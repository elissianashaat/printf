#include "main.h"

/**
 * _printf - function to print anything
 * @format: constant pointer that is a character string
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
int sumofchar = 0;
va_list ap;
char *ptr;
char *begin;
params_t params = PARAMS_INIT;
va_start(ap, format);
if (!format || (format[0] == '%' && !format[1]))
{
return (-1);
}
if (format[0] == '%' && format[1] == ' ' && !format[2])
{
return (-1);
}
for (ptr = (char *)format; *ptr; ptr++)
{
init_params(&params, ap);
if (*ptr != '%')
{
sumofchar += _putchar(*ptr);
continue;
}
begin = ptr;
ptr++;
while (get_flag(ptr, &params))
{
ptr++;
}
ptr = get_width(ptr, &params, ap);
ptr = get_precision(ptr, &params, ap);
if (get_modifier(ptr, &params))
{
ptr++;
}
if (!get_specifier(ptr))
{
sumofchar += print_from_to(begin, ptr, paramas.l_modifier || params.h_modifier ? ptr - 1 : 0);
}
else
{
sum += get_print_func(ptr, ap, &params);
}
}
_putchar(BUF_FLUSH);
va_end(ap);
return (sum);
}
