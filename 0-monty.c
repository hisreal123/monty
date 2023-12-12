#include "monty.h"

/**
 * main - funtion to implement a custom monty program
 * @argc: argument count
 * @argv: argument vectors
 * Return: EXIT_FAILURE on any kind of error, else success
*/

int main(int argc, char **argv)
{
	FILE *file_d;

	if (argc == 2)
	{
		file_d = fopen(argv[1], "r");
		if (file_d != NULL)
		{
			_read(file_d);
			fclose(file_d);
			exit(EXIT_SUCCESS);
		}
		else
			printf("Error: Can't open file_d <%s>\n", argv[1]);
	}
	else
		printf("Usage: monty file.m\n");
	exit(EXIT_FAILURE);
}
