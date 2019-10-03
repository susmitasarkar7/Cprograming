#include<stdio.h>
#include<string.h>
void main() {
    char name[80];
    int length;
    printf("Enter your name: ");
    gets(name);
    length = strlen(name);
    printf("Your name has %d characters\n", length);
}