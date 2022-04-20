#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * main - a program that adds positive numbers
 * @argc:param argc
 * @argv:param argv
 *
 * Return:1 on error and 0 on success
 */

int main(int argc, char *argv[])
{
	int i, num;
	unsigned int sum, j;
	char *isnum;

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
			isnum =	argv[i];
			for (j = 0; j < strlen(isnum); j++)
			{
				if (isnum[j] > 57 || isnum[j] < 48)
				{
				printf("Error\n");
				return (1);
				}
			}
			num = atoi(argv[i]);
			sum += num;
		}
	printf("%d\n", sum);
	}
	return (0);
}
