#include<stdio.h>
#define SIZE 5

void main() {
    int j, min_pos, temp, i, a[SIZE];

    for(i=0;i<SIZE;i++){
        printf("Element no.=%d", i+1);
        printf("\tValue of the element: ");
        scanf("%d", &a[i]);
    }

    for(i=0;i<SIZE;i++){
        min_pos = i;
        for(j=i+1;j<SIZE;j++){
            if(a[j]<a[min_pos]){
                min_pos = j;
            }
        }
        temp = a[i];
        a[i] = a[min_pos];
        a[min_pos] = temp;
    }

    printf("The array after sorting: \n");
    for(i=0;i<SIZE;i++) {
        printf("%d\n",a[i]);
    }
}