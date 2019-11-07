#include <stdio.h>
void main( )
{
    int num,sum;
    // for(i=0; i<=5; i++ )
    for (num=2,sum=0; ;)
    {
        sum += num; //can also be written as sum = sum + num
        printf("sum %d\n", sum);
        if (num > 10){
            break;
        }
            
        num += 1; // can also be written as num=num+1
        printf("num %d\n", num);
    }
    printf("%d",sum);
}
// s   n
// 2   3
// 5   4
// 9   5
// 14  6
// 20  7
// 27  8
// 35  9
// 44  10
// 54  11
// 65

