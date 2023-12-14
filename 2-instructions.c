#include "monty.h"

/**
 * instructions - scanning through the passed instructions
 * @stack: pointer to the stack
 * @inst: the passed line instructions
 * @line_no: line index of the file
 * Return: EXIT_FAILURE if instructions don't exist, else return empty
*/

void instructions(stack_t **stack, char *inst, unsigned int line_no)
{
	int i = 0;

	instruction_t instructions[] = {
		{"push", push},
		{"pop", pop},
		{"pall", pall},
		{"pint", pint},
		{"nop", nop},
		{"swap", swap},
		{"add", add},
		{"sub", sub},
		{"div", divide},
		{"mul", multiply},
		{"mod", modulus},
		{NULL, NULL}
		};
	while (instructions[i].opcode != NULL)
	{
		if (strcmp(instructions[i].opcode, inst) == 0)
		{
			instructions[i].f(stack, line_no);
			return;
		}
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_no, inst);
	free_stack(*stack);
	exit(EXIT_FAILURE);
}
