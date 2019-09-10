#include <stdio.h>

void main() {
    int a=10,b=15,x;
    x=(a<b)?++a:++b;
    printf("a=%db=%dx=%d",a,b,x);
}