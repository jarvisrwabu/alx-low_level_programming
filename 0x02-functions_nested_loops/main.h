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
