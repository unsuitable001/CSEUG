#include<stdio.h>
int main()
{
	int n,rev=0;
	printf("enter a number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		rev+=n%10;
		n/=10;
		if(n!=0)
		{
			rev*=10;
		}
	}
	printf("reversed : %d\n",rev);
	return 0;
}
