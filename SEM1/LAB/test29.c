/*Palindrome in a given range*/
#include<stdio.h>
int Palindrome(int n)
{
	int rev=0,bkp;
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
		printf("%d",rev);
	}
	return 0;
}
int main()
{
	int r,i;
	printf("Enter range : ");
	scanf("%d",&r);
	i=r;
	while(i)
	{
		Palindrome(i)
		i--;
	}
	return 0;
}

	
