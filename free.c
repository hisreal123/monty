#include "monty.h"

/**
 * free_stack - function to free stack
 * @stack: stack to be freed
 * Return: empty
*/

void free_stack(stack_t *stack)
{
	stack_t *temp;

	while (stack)
	{
		temp = stack->next;
		free(stack);
		stack = temp;
	}
	fclose(file_d);
}
