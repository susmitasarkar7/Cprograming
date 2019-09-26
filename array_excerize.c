#include <stdio.h>
void main() 
{
    int n[] = {8, 5, 2, 3, 6};
    int mul =1;
    int odd;
    int i;
    for ( i = 0; i <= 4; i++)
    {
        odd = n[i]%2;
        printf("Odd: %d\n", odd);
        if(odd == 1) {
            mul = mul * n[i];
        }
    }
        printf("%d", mul);
    
}