#include "monty.h"

/**
 * pint - func to print all the elements i a stack
 * @stack: pointer to the top of stack
 * @val: value of line
 * @line_no: line index of the file
 * Return: empty
*/

void pint(stack_t **stack, char *val, int line_no)
{
	stack_t *curr = *stack;

	if (curr == NULL)
	{
		fprintf(stderr, "L<%d>: cant pint, stack empty\n", line_no);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", curr->n);

	(void)val;
}
