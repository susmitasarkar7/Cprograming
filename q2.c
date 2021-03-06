#include <stdio.h>
 
void main()
{
    int  num, binary_val, decimal_val = 0, base = 1, rem;
 
    printf("Enter a Binary number\n");
    scanf("%d", &num); 
    binary_val = num;

    while (num > 0)
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10 ;
        printf("num:%d \n", num);
        base = base * 2;
    }

    printf("The Binary number is = %d \n", binary_val);
    printf("Its Decimal equivalent is = %d \n", decimal_val);
}

// num=11
// r=1
// d=0+1*1 = 1
// n=11/10=1.1
// b=1*2=2

// r=1.1
// d=1+1.1*2=3.2
// n=0.11
// b=2*2=4


// Program Explanation
// 
// 1. Take a binary number and store it in the variable num.
// 2. Initialize the variable decimal_val to zero and variable base to 1.
// 3. Obtain the remainder and quotient of the binary number. Store the remainder in the variable rem and override the variable num with quotient.
// 4. Multiply rem with variable base. Increment the variable decimal_val with this new value.
// 5. Increment the variable base by 2.
// 6. Repeat the steps 3, 4 and 5 with the quotient obtained until quotient becomes zero.
// 7. Print the variable decimal_val as output.