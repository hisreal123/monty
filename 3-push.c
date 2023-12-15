#include "monty.h"

/**
 * check_value - func to scan the push value
 * @stack: pointer to the stack
 * @line_no: line index of command
 * Return: the correct value
*/

int check_value(stack_t **stack, unsigned int line_no)
{
	int va1 = 0, temp = 1;

	if (value == NULL || *value == '\0')
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_no);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	if (*value == '-')
	{
		temp = -1;
		value++;
	}
	while (*value)
	{
		if (*value >= '0' && *value <= '9')
			va1 = va1 * 10 + (*value - '0');
		else
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_no);
			free_stack(*stack);
			exit(EXIT_FAILURE);
		}
		value++;
	}
	va1 *= temp;
	return (va1);
}

/**
 * push - func to add to the top of a stack
 * @stack: pointer to the stack top
 * @line_no: line index of file
 * Return: empty
*/

void push(stack_t **stack, unsigned int line_no)
{
	stack_t *new;
	int va1;

	va1 = check_value(stack, line_no);

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(*stack);
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
