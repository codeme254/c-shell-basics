#include <stdio.h>
#include <stdlib.h>

/**
  *main - reads a line of text and prints it
  *Return: 0 success
  */

int main(void)
{
	char *buffer;
	size_t buffsize = 32;
	size_t characters;

	buffer = (char *)malloc(buffsize * sizeof(char));
	if(buffer == NULL)
	{
		perror("Unable to allocate buffer\n");
		exit(1);
	}

	printf("$");
	getline(&buffer, &buffsize, stdin);
	printf("%s\n", buffer);

	return (0);
}

