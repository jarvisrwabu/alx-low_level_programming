#include <unistd.h>
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
* _puts - writes a string to stdout
* @str: The string to print
*/
void _puts(char str[])
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}
