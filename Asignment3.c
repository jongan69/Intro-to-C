#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//This code will take 5 user inputted numbers and:
//Identify if it it divisible by 2,3,5, or 7
//and then total the 'yes' in each column for if it is divisible by each number

int div2(int num1,int num2, int num3, int num4, int num5)

{
        if(num1%2 ==0)
            {
                printf("        x");
            }
        else
            {
                printf("         ");
            }


        if(num2%3 ==0)
            {
                printf("        x");
            }
        else
            {
                printf("         ");



         if(num3%3 ==0)
            {
                printf("        x");
            }
        else
            {
                printf("         ");



         if(num4%2 ==0)
            {
                printf("        x");
            }
        else
            {
                printf("         ");


         if(num5%2 ==0)
            {
                printf("        x");
            }
        else
            {
                printf("         ");
}




int main (){

    double num1, num2, num3, num4, num5;
    int array[100], position, c, n, value;

   printf("Enter number of elements you wish to calculate\n");
   scanf("%d", &n);

   printf("Enter %d \n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

/*printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &position);

   printf("Enter the value to insert\n");
   scanf("%d", &value);
   */

   for (c = n - 1; c >= position - 1; c--)
      array[c+1] = array[c];

   array[position-1] = value;

   printf("Resultant array is\n");

   for (c = 0; c <= n; c++)
      printf("%d\n", array[c]);




printf("-----------------------\n");
printf("Number ");  printf("divisible By: \n");
printf("\n");
printf("        2   3   5   7\n");
printf("-----------------------\n");


}
