#include<stdio.h>
int main()
{
	int n,i=1;
	unsigned long int fact=1;
	printf("enter a number\n");
	scanf("%d",&n);
	while(i<=n)
	{
		fact*=i;
		i++;
	}
	printf("Factorial %d is %lu\n",n,fact);
	return 0;
}
