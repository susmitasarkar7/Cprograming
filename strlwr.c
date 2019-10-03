#include<stdio.h>
#include<string.h>
void main() {
    char first[50];
    printf("Enter a string: ");
    gets(first);
    printf("Lower case of the string is %s", strlwr(first));
}