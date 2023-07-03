
/**
 * _putchar - writes the character c to stdout
 * @c: Character to print
 * Return: On success 1
 */

int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

