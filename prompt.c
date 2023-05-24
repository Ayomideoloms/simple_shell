#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	printf("$ ");

	char *buffer;
	size_t buffSize;
	size_t characters;	


	buffSize = 32;

	buffer = (char *) malloc(buffSize * sizeof(char));	
	
	characters = getline(&buffer, &buffSize, stdin);

	if (buffer == NULL)
	{
		exit(1);
	}
	printf("%s", buffer);
	return (characters);
}
