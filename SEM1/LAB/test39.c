#include<stdio.h>
int sqr(int x)
{
	return x*x;
}
int main()
{
	int x;
	printf("enter a number\n");
	scanf("%d",&x);
	printf("square of x : %d\n",sqr(x));
	return 0;
}

