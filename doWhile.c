#include <stdio.h>

void main() {
    int i=0, j=2;
    do {
        printf("%d", j);
        printf("\n");
        j = j+2;
        i = i+1;
    }
    while(i<10);
}