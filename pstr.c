#include "monty.h"

/**
 * pstr - func to print all the elements i a stack
 * @stack: pointer to the top of stack
 * @line_no: line index of the file
 * Return: empty
*/

void pstr(stack_t **stack, unsigned int line_no)
{
	stack_t *curr = *stack;

	while (curr && curr->n > 0 && curr->n <= 127)
	{
		printf("%c", curr->n);
		curr = curr->next;
	}

	printf("\n");
	(void)line_no;
}
