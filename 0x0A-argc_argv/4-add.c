#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiply two numbers from command line
 * @argc: number of arguments
 * @argv: array of argumetns
 *
 * Return: 0 for success, 1 if error
 */

int main(int argc, char *argv[])
	{
	int sum = 0;
	int i = 1;
	int j = 0;
	char *str = argv[j];

	if (argc == 1)
	{
	printf("%d\n", sum);
	return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *num_str = argv[i];

		for (j = 0; num_str[j] != '\0'; j++)
		{
		if (!isdigit(str[j]))
		{
		printf("Error\n");
		return (1);
	}
	}
	sum = atoi(num_str);

	if (sum < 0)
	{
		printf("Error\n");
		return (1);
	}
	sum += sum;
	}
	printf("%d\n", sum);
	return (0);
}
