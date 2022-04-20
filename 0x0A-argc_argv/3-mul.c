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
	int prod, num1, num2;

	prod = 1;
	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		prod = num1 * num2;
		printf("%d\n", prod);
		return (0);
	}
}
