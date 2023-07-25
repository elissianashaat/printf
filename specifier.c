#include "main.h"

/**
 * get_specifier - gets format function
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

/**
 * get_print_func - gets format function
 * @str: format string
 * @ap: argument pointer
 * @params: struct's parameters
 * Return: number of bytes that are printed
 */
int get_print_func(char *str, va_list ap, params_t *params)
{
int (*f)(va_list, params_t *) = get_specifier(str);
if (f)
{
return (f(ap, params));
}
return (0);
}

/**
 * get_flag - gets flag function
 * @s: string's format
 * @params: struct's parameters
 * Return: if valid flag, return it
 */

int get_flag(char *str, params_t *params)
{
int i = 0;
switch (*str)
{
case '+':
i = params->plus_flag = 1;
break;
case ' ':
i = params->space_flag = 1;
break;
case '#':
i = params->hashtag_flag = 1;
break;
case '-':
i = params->minus_flag = 1;
break;
case '0':
i = params->zero_flag = 1;
break;
}
return (i);
}

/**
 * get_modifier - gets modifier function
 * @str: string's format
 * @params: struct's parameter
 * Return: if valid, return the modifier
 */
int get_modifier(char *str, params_t *params)
{
int i = 0;
switch (*s)
{
case 'h':
i = params->h_modifier = 1;
break;
case 'l':
i = params->l_modifier = 1;
break;
}
return (i);
}

/**
 * get_width - gets width function
 * @str: string's format
 * @params: struct's parameter
 * @ap: pointer's argument
 * Return: pointer
 */

char *get_width(char *str, params_t *params, va_list ap)
{
int i = 0;
if (*str == '*')
{
i = va_arg(ap, int);
str++;
}
else
{
while (_isdigit(*str))
{
i = i * 10 + (*str++ - '0');
}
params->width = i;
return (s);
}
}
