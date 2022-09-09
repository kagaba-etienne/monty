#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char *tmp = "hellooo sfldkjfl sdlfjldskjf fdslkfj";
	char *token;
	char buffer[400];
	strncpy(buffer, tmp, sizeof buffer);
	buffer[sizeof buffer - 1] = '\0';
	while ((token = strtok_r(buffer, " ", &*buffer)))
		printf("%s\n", token);
	return (0);
}
