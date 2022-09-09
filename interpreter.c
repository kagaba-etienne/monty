#include "monty.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * interprete - to create an execute opcode
 * @line_number_int: line number to interprete
 * Return: pointer to instruction
 */

instruction_t *interprete(unsigned int line_number_int)
{
	instruction_t *inst;

	inst = malloc(sizeof(instruction_t));
	if (inst == NULL)
	{
		printf("error malloc failed");
		status = EXIT_FAILURE;
		return NULL;
	}
	inst->opcode = opcode;
	printf("%s   hahahaha ", opcode);
	if (strcmp(opcode, "push") == 0)
		inst->f = push;
	else if (strcmp(opcode, "pall") == 0)
		inst->f = pall;
	/*else if (strcmp(opcode, "pint") == 0)
		inst->f = pint;
	else if (strcmp(opcode, "swap") == 0)
		inst->f = swap;
	else if (strcmp(opcode, "add") == 0)
		inst->f = add;
	else if (strcmp(opcode, "pop") == 0)
		inst->f = pop;
	else if (strcmp(opcode, "nop") == 0)
		inst->f = nop;
	else if (opcode == NULL)
		;*/
	else
	{
		printf("L%u: unknown instruction %s", line_number_int, opcode);
		return (NULL);
	}
	return (inst);
}
