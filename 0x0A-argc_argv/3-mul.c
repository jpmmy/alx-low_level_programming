#include<stdio.h>
#include<stdlib.h>
/**
 * main - a program that prints product of two numbers
 * @argc:param argc
 * @argv:param argv
 *
 * Return:1 on error and 0 on success
 */

int main(int argc, char *argv[])
{
	int i, prod;

	i = 1;
	prod = 1;
	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (i < argc)
		{
		prod = prod * atoi(argv[i]);
		i++;
		}
		printf("%d\n", prod);
		return (0);
	}
}
