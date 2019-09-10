#include <stdio.h>

void main() {
    int a=1, b=2, c=3;
    int k;
    k = (a++)+(++b) + ++a - --c;
    printf("a=%d,b=%d,c=%d,k=%d",a,b,c,k);

}