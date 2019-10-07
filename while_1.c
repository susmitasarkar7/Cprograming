#include <stdio.h>
void main()
{
    int i=3;
    while(i)
    {
        int x=100;
        printf("\n%d..%d",i,x);
        x += 1;   //  can also be written as x = x+1
        i += 1;   //  can also be written as i = i+1
    }
}