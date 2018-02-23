#include <stdio.h>
#include <math.h>


int main ()
{
    float X1, Y1, X2, Y2, DistanceX, DistanceY;
    float Result;

    printf("Please enter x coordinate of first point: ");
    scanf("%lf",&X1);

   printf("Please enter y coordinate of first point: ");
    scanf("%lf",&Y1);

    printf("Please enter x coordinate of second point: ");
    scanf("%lf",&X2);

    printf("Please enter Y coordinate of second point: ");
    scanf("%lf",&Y2);


    DistanceX = (X2-X1)*(X2-X1);
    DistanceY = (Y2-Y1)*(Y2-Y1);
    Result = sqrt((DistanceX + DistanceY));
    printf("%lf", Result);
    return 0;
}
