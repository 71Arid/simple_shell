#include <stdio.h>
#include <stlib.h>
/**
  * main - accept
  * Return: null
  */
int main()
{
	char *command = NULL;
	size_t len = 0;

	while (1)
	{
		printf("$ ");
		if (getline(&command, &len, stdin) == -1)
		{
			break;
		}
	}
	free(command);
}
