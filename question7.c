#include<stdio.h>

int main(){
    int number, count = 0 , i = 1;  // 3    4
    printf("Enter a number\n");
    scanf("%d", &number);

    while(number!=0)
    {
        number = number/10;
        count++;

    }

    printf("Given number is %d digit number", count);




    
    return 0;
}