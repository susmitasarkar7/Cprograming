#include <stdio.h>

void main() {
    int result;
    printf("Enter Total marks");
    scanf("%d",&result);
    if(result<=50)
        printf("Grade D\n");
    else if(result<=75)
        printf("Grade B\n");
    else
        printf("Grade A\n");
}