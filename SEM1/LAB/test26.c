#include<stdio.h>
int main()
{
	int n,rev=0,bkp;
	printf("enter a number\n");
	scanf("%d",&n);
	bkp=n;
	while(n!=0)
	{
		rev+=n%10;
		n/=10;
		if(n!=0)
		{
			rev*=10;
		}
	}
	if(rev==bkp)
	{
		printf("Palindrome\n");
	}
	else
	{
		printf("Non palindrome\n");
	}
	return 0;
}
