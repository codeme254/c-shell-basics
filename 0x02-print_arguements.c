#include <stdio.h>

/**
  *main - prints all the arguements without using ac
  *@ac : the arguements count
  *@av : the arguements passed in the command line
  *Return: 0 success
  */

int main(int ac, char **av)
{
	int i = 0, j = 0;

	while (av[i] != NULL)
	{
		printf("%s\n", av[i]);
		++i;
	}

	return (0);
}
