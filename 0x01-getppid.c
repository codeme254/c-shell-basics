#include <stdio.h>
#include <unistd.h>

/**
  *main - finds the PID of the parent process
  *Return: 0 success
  */

int main(void)
{
	pid_t parent_id;

	parent_id = getppid();
	printf("%d\n", parent_id);
	return (0);
}
