#include<stdio.h>
long unsigned int fact(int x)
{
	return x<2?1:x*fact(x-1);
}

int main()
{
	int x;
	printf("Enter a int : \n");
	scanf("%d",&x);
	printf("Factorial %d is : %lu\n",x,fact(x));
	return 0;
}

