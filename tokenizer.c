#include "monty.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * _strtok - tokenizer function
 * str: input string
 * Return: pointer to pointers
 */

void _strtok(char *str)
{
	char b[MAX_LINE];
	char *token;
	
	strcpy(b, str);
	token = strtok(b, " ");
	opcode = token;
	token = strtok(NULL, " ");
	number = token;
}

