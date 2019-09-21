#include<stdio.h>
/*A number is said to be a Peterson number if the sum of factorials of each digit of the number is equal to the number itself.*/
int fact(int n)
{
	int i=1;
	unsigned long int fact=1;
	while(i<=n)
	{
		fact*=i;
		i++;
	}
	return fact;
}
	
int main()
{
	int n,s=0,bkp;
	printf("enter a number\n");
	scanf("%d",&n);
	bkp=n;
	while(n!=0)
	{
		s+=fact(n%10);
		n/=10;
	}
	if(s==bkp)
	{
		printf("Peterson number\n");
	}
	else
	{
		printf("non Peterson number\n");
	}
	return 0;
}
	
