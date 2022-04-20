#include<stdio.h>
/**
 * main - a program that prints the arguments passed to it
 * @argc:param argc
 * @argv:param argv
 *
 * Return:none
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
