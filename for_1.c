#include <stdio.h>

void main() {
    int i, j;
    for(i=1;i<=4;++i){
        // printf("%d\n",i);
        printf("\n");
        for(j=1;j<=i;++j){
            printf("%d\t",j);
        }
    }
}
