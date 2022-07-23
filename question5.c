#include<stdio.h>

int main(){

    int sum = 0, i = 1 , n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    while(i<=n)
    {
        sum  += i*i*i;
        i++;
    }
    printf("sum of cube of  first N natural is %d\n", sum);
    
    return 0;
}