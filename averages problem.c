#include<stdio.h>
void main()
{
	int a, n, m;
	printf("enter no.of observations ");
	scanf("%d", &n);
	printf("average ");
	scanf("%d", &a);
	printf("number to be multiplied with ");
	scanf("%d", &m);
	printf("new average is %d", a*n*m/n);
}
