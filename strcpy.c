#include<stdio.h>
#include<string.h>
void main() {
    char first[80],second[80];
    printf("Enter a string: ");
    gets(first);
    strcpy(second,first);
    printf("\nFirst string is: %s, and Second string is: %s\n", first, second);
}