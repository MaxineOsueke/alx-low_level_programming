#include "main.h"

/**
 * main: Write a function that checks for uppercase character
 * 0x: the number to be checked
 * Return: 1 for the for the upper letter and 0 for any else
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 98)
	{
	return (1);
	}
	return (0);
}	
