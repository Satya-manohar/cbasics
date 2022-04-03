# cbasics
#include <stdio.h>
int main(void)
{
    int i;
    scanf("%d", &i);
    for(i=1; i<=200000; i++)
    if(i%15==0)
    printf("FizzBuzz\n");
    else if(i%3==0)
    printf("Fizz\n");
    else if(i%5==0)
    printf("Buzz\n");
    else {
    printf("%d", i);

    }
    return 0;
}
