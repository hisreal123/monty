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
