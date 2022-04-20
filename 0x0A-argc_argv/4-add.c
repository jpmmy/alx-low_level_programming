#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
/**
 * main - a program that adds positive numbers
 * @argc:param argc
 * @argv:param argv
 *
 * Return:1 on error and 0 on success
 */

int main(int argc, char *argv[])
{
	int i, sum, num;

	i = 1;
	sum = 0;
	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		for (; i < argc; i++)
		{
			num = *argv[i];
			if (num > '9' || num < '0')
			{
			printf("Error\n");
			return (1);
			}
			else
			{
			sum += atoi(argv[i]);
			}
		}
	printf("%d\n", sum);
	}
	return (0);
}
