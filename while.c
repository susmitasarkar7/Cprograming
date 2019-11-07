#include <stdio.h>
#include <math.h>
#include <stdio.h>
void main()
{
    int x;
    long int fact = 1;
    printf("Enter any number to find factorial:\n"); /*read the number*/
    scanf("%d",&x);
    while (x > 0)
    {
        fact = fact * x; /* factorial calculation*/
        x -= 1; //can also be written as x=x-1;
    }
    printf("Factorial is %ld",fact);
}