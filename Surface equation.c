#include <stdio.h>
#include <math.h>

int main ()
{
int Altitude;
int x = 1;
int y = 5;

    for(int x=1;x<=20; x++)
{
    for(int y=5; y<=15; y++)
    {
    Altitude = 2*x+3*y-2;
    printf("(%2d, %2d) => altitude = %3d \n",x,y,Altitude);
    }
    printf("x = %d \n",x);
    }
return 0;
}
