#import <stdio.h>
#import <math.h>
#define PI 3.1415
//This Program will have two functions:
//1) calculate the area, sum of areas, and average of 3 geometry shapes.
//2) calculate the parameter, sum of parameters, and average of the 3 geometric shapes



int main ()
{
//    int y = 1;
//    int n = 2;
//    int answer;

    double circle_radius, area_of_circle, parameter_of_circle;
    double square_sidelength, square_area, square_parameters;
    double triangle_sidelength, triangle_area, triangle_parameter;
    double area_sums, parameter_sums, average_area, average_parameter;

 //   printf("Do you want to run this program again?(y/n): ");
 //       scanf("%lf",answer);

 //       while(answer<2){
//Variable Input
printf("This program will calculate the area and parameters of a circle, square, and an equilateral triangle as well as the sums and there averages.\n");
printf("\n");

printf("Please enter the radius of the circle: ");
scanf("%lf",&circle_radius);
printf("\n");

printf("Please enter the side length of the square: ");
scanf("%lf",&square_sidelength);
printf("\n");

printf("Please enter the side length of the triangle: ");
scanf("%lf",&triangle_sidelength);
printf("\n");



//Area calculators
area_of_circle = PI* (circle_radius * circle_radius);

square_area = (square_sidelength * square_sidelength);

triangle_area = ((triangle_sidelength * triangle_sidelength)/2);


//Parameter Calculator
square_parameters = (4*square_sidelength);
triangle_parameter = (3*triangle_sidelength);
parameter_of_circle= (2*(PI*circle_radius));

//Average Calculator
average_area = ((area_of_circle + square_area + triangle_area)/3);
average_parameter = ((square_parameters + triangle_parameter + parameter_of_circle)/3);

//Sum calculator
area_sums = (area_of_circle +square_area +triangle_area);
parameter_sums = (parameter_of_circle + triangle_parameter + square_parameters);

// Printing of Results
printf("The area of the circle with radius %4.2lf is: %.2lf \n", circle_radius, area_of_circle);
printf("The area of the square with side length %.2lf is: %.2lf \n", square_sidelength, square_area);
printf("The area of the equilateral triangle with side length %.2lf is: %.2lf \n", triangle_sidelength, triangle_area);
printf("\n");
printf("The parameter of the circle with radius %.2lf is: %.2lf \n", circle_radius, parameter_of_circle);
printf("The parameter of the square with side length %.2lf is: %.2lf \n", square_sidelength, square_parameters);
printf("The parameter of the equilateral triangle with side length %.2lf is: %.2lf \n", triangle_sidelength, triangle_parameter);
printf("\n");
printf("The average area of the 3 shapes is: %.2lf \n", average_area);
printf("The average parameter of the 3 shapes is: %.2lf \n", average_parameter);
printf("\n");
printf("The sum totals of the 3 shapes area is: %.2lf \n", area_sums);
printf("The sum total of the three shapes parameter is: %.2lf \n",parameter_sums);
printf("\n");
//


//printf("\n");
printf("Goodbye for now.");
return 0;

}
