#include <stdio.h>
#include "main.h"
/**
* main - Entry point
*
*
* Return: Always 0 (Success)
*/

int main(void)
{
int i;
char message[] = "_putchar\n";
	for (i = 0; message[i] != '\0'; i++)
	{
		_putchar(message[i]);
	}

return (0);
}
