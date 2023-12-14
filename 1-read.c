#include "monty.h"

char *value;

/**
 * _read - func to scan the passed instructions
 * @file_d: file_d descriptor of monty file_d passed
 * Return: -1 if any error, else 0
*/

void _read(FILE *file_d)
{
	char fetch[1024], *line[1024];
	unsigned int line_no = 0;
	stack_t *stack = NULL;

	while (fgets(fetch, sizeof(fetch), file_d) != NULL)
	{
		line_no++;
		*line = strtok(fetch, " \n\t");
		if (*line == NULL)
			continue;
		value = strtok(NULL, " \n\t");
		instructions(&stack, line[0], line_no);

	}
	free_stack(stack);
}
