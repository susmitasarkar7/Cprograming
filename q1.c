#include <stdio.h>
#include <math.h>
#include <string.h>

void main() {
    int choice, a, b;
    float e,f;
    char g[50],h[50];

    printf("Options are as follows:\n\n");
    printf("1. To find sum of two numbers\n");
    printf("2. To find remainder of two numbers\n");
    printf("3. To find product of two numbers\n");
    printf("4. To find the word twice\n\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    
    switch (choice)
    {
        case 1 : 
            printf("Enter first number:\n");
            scanf("%d", &a);
            printf("Enter second number:\n");
            scanf("%d", &b);
            printf("The sum of the numbers is %d\n",a+b);
        break;
        case 2 : 
            printf("Enter first number:\n");
            scanf("%d", &a);
            printf("Enter second number:\n");
            scanf("%d", &b);
            printf("The remainder of the numbers is %d\n",a/b);
        break;
        case 3 : 
            printf("Enter first number:\n");
            scanf("%f", &e);
            printf("Enter second number:\n");
            scanf("%f", &f);
            printf("The product of the numbers is %f\n",e*f);
        break;
        case 4 : 
            printf("Enter one word:\n");
            scanf("%s", &g);
            strcpy(h,g);
            printf("The word you entered is %s\t%s\n",g,h);
        break;
    }

}