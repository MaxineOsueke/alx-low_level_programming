#include <stdio.h>
/**
 * main - Program that prints all single digit of base 10 starting from 0
 *
 * Return: 0
*/
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
