#include <stdio.h>
void  main ( )
{
int x;
    printf("Enter a number:\n");
    scanf("%d",&x);
    if (x % 2 == 0)
    printf("\nGiven number is even\n");
    else
    printf("\nGiven number is odd\n");
}