#include <stdlib.h>
#include <string.h>

/**
 * count_words - helper function to count the number of words
 * @str: String to count.
 *
 * Return: The word count
 */
int count_words(char *str)
{
	int word_count = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}

	return (word_count);
}


/**
 * strtow - The program splits a string into words.
 * Description: Each argument should be followed by a \n in the new string
 * @str: String to break into words.
 *
 * Return: Pointer to an array words if successful or
 * NULL if it fails.
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, word_count = 0, word_len, start, idx = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word_count = count_words(str);

	words = malloc((word_count + 1) * sizeof(char *));

	while (str[i] != '\0' && words != NULL)
	{
		while (str[i] == ' ')
			i++;

		start = i;

		while (str[i] != ' ' && str[i] != '\0')
			i++;

		word_len = i - start;

		words[idx] = (char *)malloc((word_len + 1) * sizeof(char));

		strncpy(words[idx], &str[start], word_len);

		words[idx][word_len] = '\0';

		idx++;
	}

	words[word_count] = NULL;

	return (words);
}
