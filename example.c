:#include <stdio.h>
#include <stdlib.h>

/**
 * main - example
 *
 * Return: Always 0.
 *

int main(void)
{
	char *buffer;
	size_t bufsize = 32;
	int caracteres = 0;
	buffer = (char *) malloc(bufsize * sizeof§(char));
	if (buffer == NULL)
	{
		exit(1);
	}
	printf("$ ");
	getline(&buffer, &bufsize, stdin);
	printf("%d caracteres fueron leídos. \n", caracteres);
	printf("%s", buffer);
	free(buffer);
	return (0);
}
