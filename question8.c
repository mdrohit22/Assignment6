#include <stdio.h>

int main()
{
    int number, i = 2;
    printf("Enter a number\n");
    scanf("%d", &number);

    while (i < number)
    {
        if (number % i == 0)
        {  printf("not a prime");
            break;

        }
        else
            i++;
    }
    if(i == number)
       printf("%d is a prime number ", number);
    

    return 0;
}