#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - Locates index marking end of first word
 * @str: String to be searched
 *
 * Return: Index marking the end of the initial word pointed by str.
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * count_words - Count number of words in a string
 * @str: String to be searched
 *
 * Return: Number of words contained in str.
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}

/**
 * strtow - function that splits a string into words
 * @str: String to be split.
 *
 * Return: If str = Null, str "", or if function fails "NULL"
 * Otherwise - a pointer to an array of string(words)
 */
char **strtow(char *str)
{
	char **string;
	int index = 0, words, w, letter, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	string = malloc(sizeof(char *) * (words + 1));
	if (string == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		letter = word_len(str + index);

		string[w] = malloc(sizeof(char) * (letter + 1));

		if (string[w] == NULL)
		{
			for (; w >= 0; w--)
				free(string[w]);

			free(string);
			return (NULL);
		}

		for (l = 0; l < letter; l++)
			string[w][l] = str[index++];
		string[w][l] = '\0';
	}
	string[w] = NULL;
	return (string);
}
