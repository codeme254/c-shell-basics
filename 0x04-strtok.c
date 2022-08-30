#include <stdio.h>
#include <string.h>

/**
  *main - splits a string and returns an array of each word in the string
  *Return: an array of each word in the string
  */

int main(void)
{
	char str[] = "we are the world";
	char d[] = " ";

	/**
	  *@str : the string we are tokenizing
	  *@d : the delimeter
	  */

	char *portion = strtok(str, d);

	while (portion != NULL)
	{
		printf("%s\n", portion);
		portion = strtok(NULL, d);
	}
	return (0);
}
