#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * splitString - a function that splits a
 * string and returns an array of each word of the string.
 *
 *@delimiter: used to split the string
 *@str: the string to be split
 *@wordcount: the number of words
 *
 * Return: an array of split words
 */

char** splitString(const char* str, const char* delimiter, int* wordCount)
{
	char* strCopy = strdup(str);

	char** words = NULL;
	char* token = strtok(strCopy, delimiter);
	int count = 0;

	while (token != NULL)
	{
		count++;
		words = realloc(words, count * sizeof(char*));
		words[count - 1] = strdup(token);
		token = strtok(NULL, delimiter);
	}

	free(strCopy);

	*wordCount = count;
	return words;
}
