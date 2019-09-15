#include <stdio.h>
void main( )
{
    int div,num,i;
    printf("Enter any number:\n");
    scanf("%d",&num);
    for (i=2;i<=num;++i)
    {
    if ((num % i) == 0)
    {
    printf("Smallest divisor for number %d is %d",num,i);
    break;
    }
 }
}