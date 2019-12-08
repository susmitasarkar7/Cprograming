#include<stdio.h>
#include<string.h>

void main()
{
    int word_length, i, j=0, column=1;
    char a[]= "word";
    word_length = strlen(a);

    for(i=1; i<=word_length*2; i++) 
    {
        for (int j = 0; j < column; j++)
        {
            printf("%c", a[j]);
        }
        printf("\n");
        
        if(i < word_length) {
            column++;
        } else if (i > word_length) {
            column--;
        }
    }
}