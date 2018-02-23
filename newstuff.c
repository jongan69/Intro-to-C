#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <iso646.h>

//Shows Fibonacci Sequence
void printFibonacci (int numberofelements)
{
    //variable declaration
    int a,b,c;


    if(numberofelements<0)
    {
        printf("There was an error calling the function printfibonacci.\n");
        exit(0);
    }



    //assigns the first element
    a= 0;

    //shows the first element
    printf("%d",a);

    //assigns first element
    b = 1;

    //shows second element
    printf("%d",b);

    for(int counter = 3; counter <= numberofelements; counter++)
    {
        c = a+b;
        print("%d", c);

        a = b;
        b = c;
    }
    return;
}

void main()
{
    int number;

    printf("Enter the number of Elements:");
    scanf("%d", number);
    printFibonacci(number);
    return 0;
}
