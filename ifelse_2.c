#include <stdio.h>

void main() {
    int age;
    float fare;
    printf("\nEnter the age of passenger:\n");
    scanf("%d",&age);
    printf("\nEnter the Air Ticket fare\n");
    scanf("%f",&fare);
    if(age<14)
        fare = fare - 0.5*fare;
    else
        if(age<=50)
            {
                fare = fare - 0.1*fare;
            }
        else
            {
                fare = fare - 0.2*fare;
            }
    printf("\nFare after discount is %.2f", fare);
}