#include <stdio.h>
#include <math.h>


//Author: Jonathan Gan Date: 2/25/18 Class: Intro to computation



/*This program will take 5 numbers find if they are divisible by 2,3,5,and 7
and then total up the number of times each number is successfully divided by each number */


int main()
{
/*Declares the values being used for calculation, number for the looping of the calculation of each,
and counter variable x to only run the loop 4 times. */
    int num1,num2,num3,num4,num5;
    int number = num1;
    int x = 0;

printf("Enter 5 numbers to see if they are divisible by: 2,3,5 or 7 \n");
printf("\n");
//Receives the inputed number from user
    printf("Enter Number 1: \n");
    scanf("%d",&number);

    printf("Enter Number 2: \n");
    scanf("%d",&num2);

    printf("Enter Number 3: \n");
    scanf("%d",&num3);

    printf("Enter Number 4: \n");
    scanf("%d",&num4);

    printf("Enter Number 5: \n");
    scanf("%d",&num5);

//Start of formatting of outputs in columns
        printf("\n--------------------------------------------------");
        printf("\n\nNumber\tDivisible By\n\t2\t3\t5\t7\n");
        printf("\n--------------------------------------------------");


//Declaring Variables for the total x's row int the outputted table

    int total2 = 0;
    int total3 = 0;
    int total5 = 0;
    int total7 = 0;

//X is the counter variable to make sure the loop only runs 5 times for the 5 inputted variables
    while(x<=4)
    {
        printf("\n%d",number);
//Outputting the number being divided
//The formatting is done through tabs when printing using \t before what needs to have a tab
        if((number%2) == 0)
// If the number %2 produces 0 then the number is divisible (no remainder)
        {
// Increasing the counter of X's for that column
            total2++;
            printf("\tX");

        }
        else
        {
           printf("\t");
// Outputting a blank space if the number do not meet the "if" statement requirements
        }

        if (number%3 == 0)
        {
            total3++;
            printf("\tX");
        }
        else
        {
           printf("\t");
        }

        if (number%5 == 0)
        {
            total5++;
            printf("\tX");

        }
        else
        {
           printf("\t");
        }

        if (number%7 == 0)
        {
            total7++;
            printf("\tX");

        }
        else
        {
           printf("\t");
        }

//This sets the variable "number" to the other inputted values before looping the function again
        if(number == num2)
            {
            number = num3;
        }
        else
        {
                if(number== num3)
                {
                    number=num4;
                }
                else
                {
                    if(number==num4)
                    {
                        number=num5;
                    }
                    else
                    {
                    number=num2;
                }
            }

        }
         x++;
//increasing the loop counter by 1
    }


    printf("\n--------------------------------------------------\n");
    printf("\nTotal\t%d\t%d\t%d\t%d",total2,total3,total5,total7);
// Adds up the total number of X's for each Column
}

