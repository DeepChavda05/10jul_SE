// WAP to area of the circle.
#include<stdio.h>
#include<math.h>
#define pi 3.14 // define constant
int main()
{
    // const float pi = 3.14; //define the constant
    float r, area;
    // pi = 5;// can't reinitialize the value
    printf("Enter radius: "); //to take the radius 
    scanf("%f", &r);
    area = pi * pow(r, 2);
    printf("\nArea of the circle is: %f", area);
    return 0;
}