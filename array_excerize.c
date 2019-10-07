#include <stdio.h>
void main() 
{
    int n[] = {8, 5, 2, 3, 6};
    int mul =1;
    int odd;
    int i;
    for ( i = 0; i < sizeof(n)/sizeof(int); i++) // Instead of writing the length of the array manually, you can find the length of the array by this code "sizeof(n)/sizeof(int)" which returns the length of array
    {
        odd = n[i]%2;
        printf("Odd: %d\n", odd);
        if(odd == 1) {
            mul = mul * n[i];
        }
    }
        printf("%d", mul);
    
}