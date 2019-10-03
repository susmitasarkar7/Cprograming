#include<stdio.h>
#include<string.h>

void main() {
    char first[80],second[80];
    printf("Enter first string:");
    gets(first);
    printf("\nEnter second string:");
    gets(second);
    printf("\nAfter %d characters there is no match", strspn(first,second));
}