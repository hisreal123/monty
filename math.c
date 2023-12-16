#include "monty.h"

/**
 * divide - func to print all the elements i a stack
 * @stack: pointer to the top of stack
 * @line_no: line index of the file
 * Return: empty
*/

void divide(stack_t **stack, unsigned int line_no)
{
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_no);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->n;
	if (temp == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_no);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	pop(stack, line_no);
	(*stack)->n /= temp;
}

/**
 * multiply - func to print all the elements i a stack
 * @stack: pointer to the top of stack
 * @line_no: line index of the file
 * Return: empty
*/

void multiply(stack_t **stack, unsigned int line_no)
{
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_no);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->n;
	pop(stack, line_no);
	(*stack)->n *= temp;
}

/**
 * modulus - func to print all the elements i a stack
 * @stack: pointer to the top of stack
 * @line_no: line index of the file
 * Return: empty
*/

void modulus(stack_t **stack, unsigned int line_no)
{
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_no);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->n;
	if (temp == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_no);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	pop(stack, line_no);
	(*stack)->n %= temp;
}

/**
 * sub - func to print all the elements i a stack
 * @stack: pointer to the top of stack
 * @line_no: line index of the file
 * Return: empty
*/

void sub(stack_t **stack, unsigned int line_no)
{
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_no);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->n;
	pop(stack, line_no);
	(*stack)->n -= temp;
}

/**
 * add - func to print all the elements i a stack
 * @stack: pointer to the top of stack
 * @line_no: line index of the file
 * Return: empty
*/

void add(stack_t **stack, unsigned int line_no)
{
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_no);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->n;
	pop(stack, line_no);
	(*stack)->n += temp;
}
