#include <stdio.h>

void main() {
    int i, n;
    printf("Enter value of n \n");
    scanf("%d", &n);
    printf("\n The first %d natural numbers are:\n", n);
    for(i=1;i<=n;++i){
        printf("%d",i);
    }
}