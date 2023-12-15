#include "monty.h"

char *global(char *nothing);
FILE *file_d;

/**
 * main - funtion to implement a custom monty program
 * @argc: argument count
 * @argv: argument vectors
 * Return: EXIT_FAILURE on any kind of error, else success
*/

int main(int argc, char **argv)
{

	if (argc == 2)
	{
		file_d = fopen(argv[1], "r");
		if (file_d != NULL)
		{
			_read(file_d);
			exit(EXIT_SUCCESS);
		}
		else
			printf("Error: Can't open file %s\n", argv[1]);
	}
	else
		fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
