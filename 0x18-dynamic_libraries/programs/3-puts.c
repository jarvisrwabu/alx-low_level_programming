# include "main.h"
/**
 * _puts - prints a new line
 * @str: String that is added a new line
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
