# include <stdio.h>
# define SIZE 2 /* SIZE is a symbolic constant */
void main ()
{
    int i = 0;
    int max = 0;
    int stud_marks[SIZE]; /* array declaration */
    /* enter the values of the elements */
    for( i = 0;i<SIZE;i++){
        printf ("Student no. =%d",i+1);
        printf(" Enter the marks out of 50:");
        scanf("%d",&stud_marks[i]);
    }
    /* find maximum */
    for (i=0;i<SIZE;i++){
        if (stud_marks[i]>max){
            max = stud_marks[i];
        }
    } 
    printf("\n\nThe maximum of the marks obtained among all the 2 students is: %d",max);
}