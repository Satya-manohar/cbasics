#include<stdio.h>
void main()
{
	int side;
	printf("side of the square? ");
	scanf("%d", &side);
	printf("area of the square is %d\n", side*side);
	printf("perimeter of the square is %d", side*4);
}
