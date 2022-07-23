#include<stdio.h>

int main(){
    int sum = 0, i = 1 , n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    while(i<=n)
    {
        sum  += 2*i - 1;
        i++;
    }
    printf("sum of first N odd natural is %d\n", sum);
    
    return 0;
}