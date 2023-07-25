#include "main.h"

/**
 * print_from_to - prints charactes addresses
 * @begin: beginning address
 * @end: endding address
 * @except: except address
 * Return: no. of printed bytes
 */
int print_from_to(char *begin, char *end, char *except)
{
int sumofchar = 0;
while (begin <= end)
{
sumofchar += _putchar(*begin);
begin++;
}
return (sum);
}

/**
 * print_rev - prints a reversed string
 * @ap: the string
 * @params: struct's parameter
 * Retrun: no. of bytes that will be printed
 */
int print_rev(va_list ap, params_t *params)
{
int length = 0;
int sum = 0;
char *str = va_arg(ap, char *);
(void)params;
if (str)
{
for (length; *str; str++)
{
length++;
}
str--;
for (; length > 0; length--; str--)
{
sun += _putchar(*str);
}
return (sum);
}
}


