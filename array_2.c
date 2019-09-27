#include<stdio.h>
#define SIZE 3
void main() {
    int i = 0;
    float std_marks1[SIZE];
    float std_marks2[SIZE];
    float total_marks[SIZE];
    float avg[SIZE];

    printf("\nEnter the marks in subject-1 out of 50 marks: \n");
    for(i=0;i<SIZE;i++){
        printf("Student no. =%d", i+1);
        printf("\tEnter the marks = ");
        scanf("%f", &std_marks1[i]);
    }
    printf("\nEnter the marks in subject-2 out of 50 marks \n");
    for(i=0;i<SIZE;i++){
        printf("Student no. =%d", i+1);
        printf("\tEnter the marks = ");
        scanf("%f", &std_marks2[i]);
    }
    for(i=0;i<SIZE;i++){
        total_marks[i] = std_marks1[i] + std_marks2[i];
        avg[i] = total_marks[i]/2;
        printf("\nStudent no.=%d, Average=%f\n", i+1, avg[i]);
    }
}