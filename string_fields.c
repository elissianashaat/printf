#include "main.h"

/**
 * get_precision - gets precision function
 * @ptr: string's format
 * @params: struct's parameter
 * @ap: pointer's argument
 * Return: pointer
 */

char *get_precision(char *ptr, params_t *params, va_list ap)
{
int i = 0;
if (*ptr != '.')
{
return (ptr);
}
ptr++;
if (*ptr == '*')
{
i = va_arg(ap, int);
ptr++;
}
else
{
while (_isdigit(*ptr))
{
i = i * 10 + (*ptr++ - '0');
}
params->precision = i;
return (ptr);
}
}

