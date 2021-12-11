#include<stdio.h>
void main()
{
	int number;
	printf("enter an integer ");
	scanf("%d", &number);
	if(number>0)
	{
		printf("the given number %d is positive ", number);
	}
	else
	{
		printf("the given number %d is negative", number);
	}
}
