#include <stdio.h>
void main()
{
    int i=2;
    while(1)
    {
        printf("%d ",i);
        i=i+2;
        if (i>=20)
        goto outside;
    }
    outside : printf("over");
}