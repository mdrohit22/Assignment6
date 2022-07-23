#include<stdio.h>

int main(){

    int number, i = 2 , last;   // 387 --> 783
    printf("Enter a number\n");
    scanf("%d", &number);

    while(number != 0)
    {
        last = number%10;   // 7
        printf("%d",last);
        number = number/10;  // 38
    }





    
    return 0;
}