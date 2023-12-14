#include "monty.h"

/**
 * rotr - func to print all the elements i a stack
 * @stack: pointer to the top of stack
 * @line_no: line index of the file
 * Return: empty
*/

void rotr(stack_t **stack, unsigned int line_no)
{
	stack_t *curr = *stack;
	int temp;

	if (curr != NULL && curr->next != NULL)
		while (curr->next != NULL)
			curr = curr->next;
	else
		return;

	temp = curr->n;
	while (curr->prev != NULL)
	{
		curr->n = curr->prev->n;
		curr = curr->prev;
	}

	curr->n = temp;
	(void)line_no;
}
