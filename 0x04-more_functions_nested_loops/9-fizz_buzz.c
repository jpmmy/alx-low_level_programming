#include"main.h"
#include<stdio.h>

/**
 * fizzbuzz - function prints fizzbuzz test
 * function prints 1 to 100 but fizz for multiple of three and 
 * buzz for multiple of five
 * Return : return none
 */

int main(void)
{
	int i;
	int j;
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && !((i % 5) == 0) )
		{
			printf(" ");
			printf("Fizz");
		}
		else if ((i % 5) == 0 && !((i % 3) == 0))
		{
			printf(" ");
			printf("Buzz"); 
		}
		else if ((i % 3) == 0 && ((i % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			if (i == 1)
			{
				printf("%d",i);
			}
			else
			{
				printf(" ");
				printf("%d",i);
			}
		}
	}
	printf("\n");
}
