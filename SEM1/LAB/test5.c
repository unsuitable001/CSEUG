#include<stdio.h>
#include<math.h>
// Area and circumference of triangle
void main(){
	float a,b,c,area,cir,s;
	printf("Enter the value of three sides of the triangle : \n");
	scanf("%f%f%f",&a,&b,&c);
	cir = a+b+c;
	s = cir/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Circumference : %f\nArea : %f\n",cir,area);
}
