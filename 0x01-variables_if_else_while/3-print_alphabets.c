#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch, anch;

	for (ch = 'a'; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}

	for (anch = 'A' ; anch <= 'Z' ; anch++)
	{
		putchar(anch);
	}
	putchar('\n');
	return (0);
}
