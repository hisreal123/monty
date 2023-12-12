#include "monty.h"

/**
 * push - func to add to the top of a stack
 * @stack: pointer to the stack top
 * @val: value of the line
 * @line_no: line index of file
 * Return: empty
*/

void push(stack_t **stack, char *val, int line_no)
{
	stack_t *new;
	int va1;

	if (val == NULL)
	{
		fprintf(stderr, "L<%d>: usage: push integer\n", line_no);
		exit(EXIT_FAILURE);
	}
	va1 = Ato1(val);
	if (va1 == -1)
	{
		fprintf(stderr, "L<%d>: usage: push integer\n", line_no);
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n = va1;
	new->prev = NULL;

	if (*stack != NULL)
	{
		new->next = *stack;
		(*stack)->prev = new;
	}
	else
		new->next = NULL;

	*stack = new;
}
