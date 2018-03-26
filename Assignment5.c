#include <stdio.h>
#include <math.h>

int test;


int main()
{
    int num = 0;
    printf("------------------------------------------------------------------\n");

    printf("Odd Prime    Power of    Power of  Power of  Power of\n");

    printf("Number                0                1               2               3\n");

    printf("------------------------------------------------------------------\n");
    while(num<=100){
    if(Prime(num)==1){
        if Odd(num)==1{
            printf("yes");
            num++;
        }}}
}

int Prime(int num)
{
int num;
int counter = 0;
int check;

    while(counter <=num){
        if(num%counter==0){
            counter++;
            check = 1;
            }
    else{
        check = 0;
        }counter++;}

return check;
}

int Odd(int num)
{
 int counter = 0;
 int num;
 int check;

 if(num)
