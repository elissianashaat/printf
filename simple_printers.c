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

/**
 * print_rot13 - rot13 string printed
 * @ap:the string
 * @params: struct's parameters
 * Return: no.of bytes to be printed
 */

int print_rot13(va_list ap, params_t *params)
{
int i;
int j;
int c = 0;
char arr[] = "NOPQRSTUVWXYZABCDEFGHIJKLM   nopqrstuvwxyzabcdefghijklm";
char *a = va_arg(ap, char *);
(void)params;
i = 0;
j = 0;
while (a[i])
{
if ((a[i] >= 'A' && a[i] <= 'Z') ||
		(a[i] >= 'a' && a[i] <= 'z'))
{
j = a[i] - 65;
c += _putchar(arr[j]);
}
else
{
c += _putchar(a[i]);
}
i++;
}
return (count);
}
