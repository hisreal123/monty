#include "monty.h"

/**
 * pall - func to print all the elements i a stack
 * @stack: pointer to the top of stack
 * @val: value of line
 * @line_no: line index of the file
 * Return: empty
*/

void pall(stack_t **stack, char *val, int line_no)
{
	stack_t *curr;

	curr = *stack;
	printf("Stack: ");

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}

	(void)val;
	(void)line_no;
}
