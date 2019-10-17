#include <stdio.h>

void main() {
    int choice, a, rev, b, c;
    float e, f, big;

    printf("Options are as follows:\n\n");
    printf("1. Enter a 5 digit number and get the reverse of the given number\n");
    printf("2. Enter two floats and get the largest of the inputs\n");
    printf("3. Enter a number and if the number is divisible by two, result will be half, otherwise it will be three times larger\n");
    printf("4. Enter three integers and check whether any of them are equal\n\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    
    switch (choice)
    {
        case 1 : 
            printf("Enter the number:\n");
            scanf("%d", &a);
            while(a>=1) {
                    rev = a%10; // it gives me remainder
                    printf("%d",rev); // just print that remainder
                    a = a/10;	// divide the number for the next iteration
                }
        break;
        case 2 : 
            printf("Enter first number: ");
            scanf("%f", &e);
            printf("Enter second number: ");
            scanf("%f", &f);
            if(e>f)
                big=e;
            else
                big=f;
            printf("\nBiggest of the two number is: %f", big);
        break;
        case 3:
            printf("Enter a number: ");
            scanf("%d", &a);
            if(a%2 == 0) {
                printf("The result is %d", a/2);
            }else {
                printf("The result is %d", a*3);
            }
        break;
        case 4:
            printf("Enter the values for a and b and c\n");
            scanf("%d %d %d", &a, &b, &c);
            if (a == b || b == c || c == a)
                printf("a and b and c are equal\n");
            else
                printf("a and b and c are not equal\n");
        break;
    }

}