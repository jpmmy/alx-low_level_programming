#include<stdio.h>
/**
 * main - a program that prints the number of arguments passed to it
 * @argc:param argc
 * @argv:param argv
 *
 * Return:none
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc <= 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		printf("%d\n", argc);
	}
	return (0);
}
