#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "monty.h"

char *filename;
char *opcode;
char *number;
int status;
/**
 * main - call other functions
 * @argc: argument count
 * @argv: argument vector
 * Return: success all failure
 */

int main(int argc, char *argv[])
{
	stack_t *stack_real;

	stack_real = NULL;
	if (argc < 2 || argc > 2)
	{
		printf("%s\n", "USAGE: monty file");
		return (EXIT_FAILURE);
	}
	filename = argv[1];
	status = read_lines(&stack_real);
	return (status);
}
