#include<stdio.h>

void main() {
    int i = 0, counter = 0;
    char word[50];

    printf("Enter a word: ");
    scanf("%s", &word); // foo
    while(word[i]) {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            counter++;
        }
        i++;
    }
    printf("The word you entered is: %s\n", word);
    printf("No of vowels in it: %d\n", counter);
}