// #include<stdio.h>
// #include<string.h>
// void main() {
//     char first[50];
//     printf("Enter a string: ");
//     scanf("%s", first);
//     char res[]= strlwr(first);
//     printf("Lower case of the string is %s", res);
// }

#include<stdio.h> 
#include<string.h> 
#include<ctype.h>
  
int main() 
{ 
    int i=0;
    char c= 'J';
    char arr[]="SUBHO BIJAYA";

    while(arr[i]) {
        printf("%c", tolower(arr[i]));
        i++;
    }
  
    return  0; 
} 