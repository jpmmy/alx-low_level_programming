#include<stdio.h>
#include<stdlib.h>
/**
 * main - a program that adds positive numbers
 * @argc:param argc
 * @argv:param argv
 *
 * Return:1 on error and 0 on success
 */

int main(int argc, char *argv[])
{
	int i, sum, isnum, num;

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
			isnum = *argv[i];
			if (isnum > '9' || isnum < '0')
			{
			printf("Error\n");
			return (1);
			}
			else
			{
			num = atoi(argv[i]);
			sum += num;
			}
		}
	printf("%d\n", sum);
	}
	return (0);
}
