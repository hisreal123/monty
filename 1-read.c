#include "monty.h"

/**
 * _read - func to scan the passed instructions
 * @file_d: file_d descriptor of monty file_d passed
 * Return: -1 if any error, else 0
*/

void _read(FILE *file_d)
{
	char *line;
	int line_no = 1;
	stack_t *stack = NULL;

	while (fgets(line, sizeof(line), file_d) != NULL)
	{
		if (sizeof(line) != 0)
		{
			instructions(&stack, &line, line_no);
		}
		line_no++;
	}
}
