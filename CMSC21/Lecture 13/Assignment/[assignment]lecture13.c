#include<stdio.h>
#include<math.h>
 
void main()
{
    float x1,x2,y1,y2,slope,midX,midY,distance,b;
    double m;
    
    //reads the x and y coordinate of point1 from the user and stores it in the “x1” and “y1” variables respectively//
    printf("Enter x for point1: ");
    scanf("%f",&x1);
    printf("Enter y for point1: ");
    scanf("%f",&y1);
    
    //reads the x and y coordinate of line2 from the user and stores it in the “x2” and “y2” variables respectively//
    printf("Enter x for line2: ");
    scanf("%f",&x2);
    printf("Enter y for line2: ");
    scanf("%f",&y2);
    
    
    //using the formulas the slope and midpoint of a line is calculated and stored in the “slope” and “midX”, “midY” variables respectively//
    slope=(y2-y1)/(x2-x1);
     
    midX=(x1+x2)/2;
    midY=(y1+y2)/2;
    
    //using the formulas the distance and slope intercept form of a line is calculated in the "distance" and "m", "b" variables respectively//
    distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	m=(y2-y1)/(x2-x1);
    b=y2-(m*x2);
    
    //prints the slope, midpoint, distance, and slope intercept form of a line//
    printf("Slope : %.2f",slope);
    printf("\nMidpoint : (%.2f,%.2f)",midX,midY);
    printf("\nDistance between 2 points: %.4f", sqrt(distance));
    printf("\ny = %.0fx + %.0f",m,b);
}