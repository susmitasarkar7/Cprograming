#include <stdio.h>
void main( )
{
    int i = 5;
    while(i)
    {
        i -= 1; //can also be written as i=i-1;
        if (i==3)
        continue;
        printf("\nhello");
    }
}