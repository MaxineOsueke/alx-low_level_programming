#include "main.h"
#include <stdio.h>

/**
 * main -  Program that prints the number of arguments
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
