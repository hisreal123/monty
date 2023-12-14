#include "monty.h"

/**
 * _read - func to scan the passed instructions
 * @file_d: file_d descriptor of monty file_d passed
 * Return: -1 if any error, else 0
*/

void _read(FILE *file_d)
{
	char *fetch, *line[100], *token = NULL;
	int line_no = 1, i;
	stack_t *stack = NULL;
	size_t read, len = 0;

	while ((read = getline(&fetch, &len, file_d)) != (size_t)-1)
	{
		fetch[read - 1] = '\0';

		if (fetch[0] != '\0')
		{
			token = strtok(fetch, " ");
			i = 0;
			while (token && i < 100)
			{
				line[i] = token;
				token = strtok(NULL, " ");
				i++;
			}
			instructions(&stack, line, line_no);
		}
		
		line_no++;
		len = 0;
		free(fetch);
		fetch = NULL;
	}
	free(fetch);
}
