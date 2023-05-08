#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point for program to get header of ELF file
 * @argc: count of arguments present in CLI
 * @argv: pointer to array of pointers to arguments
 *
 * Return: 1 on success, error code on failure
 */
int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
