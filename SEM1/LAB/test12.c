#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter two numbers \n");
	scanf("%d%d",&a,&b);
	temp = a;
	a = b;
	b = temp;
	printf("swapped value %d %d \n",a,b);
	return 0;
}
