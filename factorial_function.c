#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <iso646.h>

int factorial (int factorials)
{
int n,i;
printf("Enter the number you would like factorial of");
    scanf("%d",&n);
}

int main()
{
    int i, n;
    printf("Enter the number you would like factorial of");
    scanf("%d",&n);
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;              // factorial = factorial*i;
        }
        printf("Factorial of %d = %llu", n, factorial);
    }

    int a;
    int factor
    printf("Enter the number you would like factorial of");
    scanf("%d",a);
    factorial(a);
}
