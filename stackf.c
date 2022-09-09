#include "monty.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * pall - push an element on to the stack
 * @stack: the stack top
 * @line_number: the line number of the opcode
 * Return: void
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	line_number = line_number;
	current = *stack;
	while (current != NULL)
	{
		printf("%d", current->n);
		current = current->next;
	}
}

/**
 * push - push an element on to the stack
 * @stack: the stack top
 * @line_number: the line number of the opcode
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	int num;
	char *checker;

	num = atoi(number);
	checker = "";
	sprintf(checker, "%d", num);
	if (strcmp(checker, number) == 0)
	{
		new = malloc(sizeof(stack_t));
		if (new == NULL)
		{
			printf("error malloc failed");
			status = EXIT_FAILURE;
			return;
		}
		new->n = num;
		new->prev = *stack;
		(*stack)->next = new;
		(*stack) = new;
		new->next = NULL;
	}
	else
	{
		printf("L%u: usage: push integer", line_number);
		status = EXIT_FAILURE;
		return;
	}
}
