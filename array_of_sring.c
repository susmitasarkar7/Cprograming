#include<stdio.h>
void main() {
    int n;
    char names[3][10] = {"Alex", "Phillip", "Collins"};
    for(n=0;n<3;n++) {
        printf("%s\n", names[n]);
    }
}