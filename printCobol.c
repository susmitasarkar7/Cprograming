#include<stdio.h>
#define print_cobol(){\
    cobol(); \
}
void cobol();
int main() 
{ 
    // char *ptr = "COBOL";
    print_cobol(); 
    // cobol(ptr); 
    return 0; 
} 
void cobol() {
    int word_length=5, i, j=0, column=1;
    char cobol[]= "COBOL";

    for(i=1; i<=word_length*2; i++) 
    {
        for (int j = 0; j < column; j++)
        {
            printf("%c", cobol[j]);
        }
        printf("\n");
        
        if(i < word_length) {
            column++;
        } else if (i > word_length) {
            column--;
        }
    } 

}