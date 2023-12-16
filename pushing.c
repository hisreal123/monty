#include "monty.h"

/**
 * pop - func to remove the top of the stack
 * @stack: pointer to the top of stack
 * @line_no: line index of file
 * Return: empty
*/

void pop(stack_t **stack, unsigned int line_no)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_no);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	*stack = (*stack)->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;

	free(temp);
	(void)line_no;
}

/**
 * nop - func to print all the elements i a stack
 * @stack: pointer to the top of stack
 * @line_no: line index of the file
 * Return: empty
*/

void nop(stack_t **stack, unsigned int line_no)
{
	(void)line_no;
	(void)*stack;
}

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
 * push_queue - push for a stack
 * @stack: pointer to the queue
 * @new: new element
 * Return: empty
*/

void push_queue(stack_t **stack, stack_t *new)
{
	stack_t *curr = *stack;

	new->next = NULL;

	while (curr && curr->next)
		curr = curr->next;

	if (!curr)
	{
		new->prev = NULL;
		*stack = new;
	}
	else
	{
		curr->next = new;
		new->prev = curr;
	}
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
	if (isstack == 1)
	{
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
	else
		push_queue(stack, new);
}
