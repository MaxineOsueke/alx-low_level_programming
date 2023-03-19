#include <stdio.h>
/**
 * main - print all letters except p and e;
 *
 * Return: 0
*/
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);

}
