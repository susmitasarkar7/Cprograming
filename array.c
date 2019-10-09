# include <stdio.h>
# define SIZE 5 /* SIZE is a symbolic constant */
void main ()
{
    int stud_marks[SIZE]; /* array declaration */
    /* enter the values of the elements */
    for( int i = 0;i<SIZE;i++)                  /* i Is The Loop variable */
    {
        printf ("a[%d] Element no.  %d\n",i,i+1);
        printf("Enter the value of the element: "); 
        scanf("%d",&stud_marks[i]);
    }
    printf("\nFollowing are the values stored in the corresponding array elements : \n\n");
    for( int i = 0; i<SIZE;i++)
        printf("Value stored in a[%d] is %d\n",i, stud_marks[i]);   /*No need to put curly brackets when only one statement is written*/
} 