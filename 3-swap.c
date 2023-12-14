#include "monty.h"

/**
 * swap - adds the top tow elements of the stack
 * @head: stack head
 * @counter: line_number as input
 * Return: no return
 */

void swap(stack_t **stack, unsigned int line_number)
{
    stack_t *temp;

    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    temp = (*stack)->next;
    (*stack)->next = temp->next;
    (*stack)->prev = temp;
    temp->next = *stack;
    temp->prev = NULL;
    *stack = temp;
}