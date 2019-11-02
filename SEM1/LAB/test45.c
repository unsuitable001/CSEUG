#include<stdio.h>
float CtoF(float c)
{
	return (9*c/5)+32;
}

int main()
{
	float cel;
	printf("Enter celcius : ");
	scanf("%f",&cel);
	printf("You entered %f Fahrenhiet\n",CtoF(cel));
	return 0;
}

