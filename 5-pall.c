#include "monty.h"

/**
 * pall - func to print all the elements i a stack
 * @stack: pointer to the top of stack
 * @line_no: line index of the file
 * Return: empty
*/

void pall(stack_t **stack, unsigned int line_no)
{
	stack_t *curr;

	curr = *stack;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}

	(void)line_no;
}
