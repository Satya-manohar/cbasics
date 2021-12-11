#include<stdio.h>
void main()
{
	int number;
	printf("enter an integer ");
	scanf("%d", &number);
	if(number%2 == 0)
	{
		printf("the given number %d is even ", number);
	}
	else
	{
		printf("the given number %d is odd", number);
	}
}
