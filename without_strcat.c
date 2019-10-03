#include<string.h>
#include<stdio.h>
void main() {
    char str1[10];
    char str2[10];
    char output_str[20];
    int i=0,j=0,k=0;
    printf("Input first string: ");
    gets(str1);
    printf("\nInput second string: ");
    gets(str2);
    while(str1[i] != '\0');
    output_str[k++] = str2[j++];
    output_str[k] = '\0';
    puts(output_str);
    // printf("\n%s", output_str);
}