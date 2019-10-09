#include<stdio.h>
#include<string.h>
void main() {
    char first[80], second[80];
    printf("Enter a string:");
    scanf("%s", first);
    printf("Enter another string:");
    scanf("%s", second);
    strcat(first, second);
    printf("\nThe two string joined together: %s\n", first);
}