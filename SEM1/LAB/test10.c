#include<stdio.h>
int main()
{
	float unit,rate=0;
	printf("Enter energy consumed : \n");
	scanf("%f",&unit);
	if(unit<=100)
	{
		rate = unit * 5;
	}
	else if(unit>=101 && unit<=200)
	{
		rate = unit * 7;
	}
	else if(unit>=201 && unit<=300)
	{
		rate = unit * 10;
	}
	else
	{
		rate = unit * 15;
	}
	printf("Payable Amount : %f\n",rate);
	return 0;
}

