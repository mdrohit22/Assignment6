#include <stdio.h>

int main()
{

    int factorial, i = 1, answer=1;
    printf("Enter a number\n");
    scanf("%d", &factorial);
    while (i <= factorial)
    {

        answer = answer * i;
        
        i++;


        
    }
    printf("Factorial of %d is %d ", factorial , answer);

    return 0;
}