#include "monty.h"

/**
 * pchar - func to print all the elements i a stack
 * @stack: pointer to the top of stack
 * @line_no: line index of the file
 * Return: empty
*/

void pchar(stack_t **stack, unsigned int line_no)
{
	stack_t *curr = *stack;

	if (curr == NULL)
	{
		fprintf(stderr, "L<%d>: cant pchar, stack empty\n", line_no);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	if (curr->n >= 0 && curr->n <= 127)
		printf("%c\n", curr->n);
	else
	{
		fprintf(stderr, "L<%d>: cant pchar, value out of range\n", line_no);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
}
