#include<stdio.h>
int add(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int mul(int x,int y)
{
	return x*y;
}
int div(int x,int y)
{
	return x/y;
}

int main()
{
	int x,y;
	printf("enter two numbers\n");
	scanf("%d%d",&x,&y);
	printf("Add : %d, Sub : %d, Multiply : %d, Division : %d\n", add(x,y),sub(x,y),mul(x,y),div(x,y));
	return 0;
}
