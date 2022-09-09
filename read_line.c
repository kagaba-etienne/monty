#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "monty.h"

/**
 * read_line - read from a specific line
 * @line_number: that specific line to read
 * Return: success or failure
 */

int read_lines(stack_t **stack)
{
	FILE *file;
	char buffer[MAX_LINE];
	unsigned int current_line;
	instruction_t *operation;

	file = fopen(filename, "r");
	if (file == NULL)
	{
		printf("ERROR openng file\n");
		return (EXIT_FAILURE);
	}
	current_line = 0;
	do {
		current_line += 1;
		fgets(buffer, MAX_LINE, file);
		if (feof(file))
		{
			break;
		}
		_strtok(buffer);
		operation = interprete(current_line);
		if (operation == NULL)
			continue;
		operation->f(stack, current_line);
		opcode = NULL;
		number = NULL;
	} while (!status);
	fclose(file);
	return (EXIT_SUCCESS);
}

