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

/**
 * pint - func to print all the elements i a stack
 * @stack: pointer to the top of stack
 * @line_no: line index of the file
 * Return: empty
*/

void pint(stack_t **stack, unsigned int line_no)
{
	stack_t *curr = *stack;

	if (curr == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_no);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", curr->n);
}

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
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_no);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	if (curr->n >= 0 && curr->n <= 127)
		printf("%c\n", curr->n);
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_no);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
}

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
