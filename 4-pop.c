#include "monty.h"

/**
 * pop - func to remove the top of the stack
 * @stack: pointer to the top of stack
 * @val: value of line
 * @line_no: line index of file
 * Return: empty
*/

void pop(stack_t **stack, char *val, int line_no)
{
	stack_t *temp;

	(void)val;
	(void)line_no;

	if (*stack == NULL)
	{
		fprintf(stderr, "Stack is empty\n");
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	*stack = (*stack)->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(temp);
}
