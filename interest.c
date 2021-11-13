#include<stdio.h>
void main()
{
	int p, y;
	float r;
	printf("principal amount = ");
	scanf("%d", &p);
	printf("no. of years = ");
	scanf("%d", &y);
	printf("rate of interest = ");
	scanf("%f", &r);
	printf("total interest to be paid = %f", p*y*r/100);
}
