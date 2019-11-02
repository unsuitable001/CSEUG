#include<stdio.h>
int GCD(int x, int y)
{
	if(y==0)
		return x;
	return GCD(y, x%y);
}
int main()
{
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	printf("GCD : %d\n",GCD(a,b));
	return 0;
}

