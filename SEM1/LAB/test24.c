#include<stdio.h>
int main()
{
	int n,s=0;
	printf("enter a number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		s+=n%10;
		n/=10;
	}
	printf("sum of digits : %d\n",s);
	return 0;
}
