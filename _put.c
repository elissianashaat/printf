#include "main.h"

/**
 * _puts - prints the string followed by a
 * new line takes a complete string to show
 * @strng: pointer to a string to be printed
 * Return: void
 */

int _puts(char *strng)
{
char *s = strng;
while (*strng)
{
_putchar(*strng++);
}
return (str - s);
}

/**
 * _putchar - writes the character to stdout
 * @ch: charater that will be printed
 * Return: On success return 1
 * On failuer return -1
 */

int _putchar(int ch)
{
static int i;
static char buf(OUTPUT_BUF_SIZE);
if (ch == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
{
write(1, buf, i);
i = 0;
}
if (ch != BUF_FLUSH)
{
buf[i++] = ch;
}
return (1);
}
