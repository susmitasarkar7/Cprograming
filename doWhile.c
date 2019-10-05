#include <stdio.h>

void main() {
    int i=0, j=2;
    do {
        printf("%d\n", j); //the "\n" can be put here
        j += 2;            //same as j = j+2
        i++;               //same as i = i+1
    }
    while(i<10);
}