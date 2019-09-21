#include<stdio.h>
#include<math.h>
#define PI 3.14
// area & circumference of a circle
void main(){
	float r,area,cir;
	printf("Enter radius (unit) : \n");
	scanf("%f",&r);
	cir = 2*r*PI;
	area = PI*pow(r,2);
	printf("Area (sq. unit) : %f \nCircumference (unit) : %f\n",area,cir);
}
