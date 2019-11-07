#include<stdio.h>

void main() {
    float gross_salary, net_salary;

    printf("Enter gross of an employee\n");
    scanf("%f", &gross_salary);

    if(gross_salary<10000)
        net_salary= gross_salary;
    else if(gross_salary>=10000)                        // the file name is ifelse and the "else" was missing on this line
        net_salary= gross_salary- 0.15*gross_salary;
    
    printf("\nNet salary is Rs.%.2f\n", net_salary);
}