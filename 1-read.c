#include "monty.h"

/**
 * _read - func to scan the passed instructions
 * @file_d: file_d descriptor of monty file_d passed
 * Return: -1 if any error, else 0
 */

void _read(FILE *file_d)
{
	char fetch[100], *line[100], *token = NULL;
	int line_no = 1, i = 0;
	stack_t *stack = NULL;

	while (fgets(fetch, sizeof(fetch), file_d) != NULL)
	{
		while (fetch[i] != '\0')
			i++;
		if (i > 0 && fetch[i - 1] == '\n')
			fetch[i - 1] = '\0';
		if (i > 0)
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
	}
}
