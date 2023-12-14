#include "monty.h"

/**
 * rotl - func to print all the elements i a stack
 * @stack: pointer to the top of stack
 * @line_no: line index of the file
 * Return: empty
*/

void rotl(stack_t **stack, unsigned int line_no)
{
	stack_t *curr = *stack;
	int temp;

	if (curr != NULL && curr->next != NULL)
		temp = curr->n;
	else
		return;

	while (curr->next != NULL)
	{
		curr->n = curr->next->n;
		curr = curr->next;
	}

	curr->n = temp;
	(void)line_no;
}
