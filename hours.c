#include<stdio.h>
void main()
{
	int m;
	printf("Enter minutes ");
	scanf("%d", &m);
	printf("%d hour(s) %d minute(s)", m/60, m%60);
}
