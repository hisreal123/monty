#include "monty.h"

/**
 * swap - func to print all the elements i a stack
 * @stack: pointer to the top of stack
 * @line_no: line index of the file
 * Return: empty
*/

void swap(stack_t **stack, unsigned int line_no)
{
	stack_t *curr = *stack;
	int temp;

	if (curr == NULL || curr->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_no);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	temp = curr->next->n;
	curr->next->n = curr->n;
	curr->n = temp;
}
