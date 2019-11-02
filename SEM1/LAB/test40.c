#include<stdio.h>
int fact(int x)
{
	int f=1;
	while(x)
	{
		f*=x;
		x--;
	}
	return f;
}
int main()
{
	int x;
	printf("Enter a int : \n");
	scanf("%d",&x);
	printf("Factorial : %d\n",fact(x));
	return 0;
}

