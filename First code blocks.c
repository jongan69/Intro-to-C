#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int x;
    bool flag;
    printf("Enter the value of x: ");


    flag = ((2*x*x-3*x+5)>=5);

    printf("flag = %d \n", flag);

    return 0;
}
