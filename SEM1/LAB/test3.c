#include<stdio.h>
// simple calculator
void main(){
	float a,b,sum,sub,mul,div;
	printf("Enter two integers : \n");
	scanf("%f%f",&a,&b);
	sum = a+b;
	sub = a-b;
	mul = a*b;
	div = a/b;
	printf("Sum : %f \nSubstraction : %f \nMultiplication : %f \nDivision : %f \n",sum,sub,mul,div);
}

