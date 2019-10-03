#include<stdio.h>
#include<string.h>
void main() {
    char first[80], second[80];
    int value;
    printf("Enter a String: ");
    gets(first);
    printf("Enter another String: ");
    gets(second);
    value = strcmp(first,second);
    if(value == 0){
        puts("The two strings are equal");
    } else if(value > 0) {
        puts("The first string is smaller");
    } else if(value < 0) {
        puts("The first is bigger");
    }
}