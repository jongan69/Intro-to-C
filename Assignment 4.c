#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <iso646.h>


//Author Jonathan Gan
//Created 2/27/18
//Intro to computation

int even()
{
    int b = 0;


    while(b<11)
    {
        if(b % 2 == 0)
        {

            printf("%d \n",b);
            b++;
        }
        b++;
    }
}

int expo()
{
    int d =2;
    int e =0;
    do
    {
        printf("2^%d=%.1f \n",e,pow(d,e));
        e++;

    }
        while(e<17);
    return 0;
}

int fact()
{
    int counter =  1;
    unsigned long factorial = counter;
    int digit =10;
    int start;

    for(start=1; start<=10; ++start)
        {
            factorial = factorial*= start;
            printf("Factorial of %d = %d \n", start, factorial);
            counter++;
        }

    return 0;
}


int main()
{

    int x;
    int y;
    int z;
    printf("This is a program that print even numbers 0-10, 2^0 - 2^16 , and factorial numbers from 0-10 \n");
    x = even();
    y = expo();
    z = fact();

}
