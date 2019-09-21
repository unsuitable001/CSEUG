#include<stdio.h>
int main()
{
	int n,i=1;
	printf("enter range\n");
	scanf("%d",&n);
	if(n%2==0)
	{
		n++;
	}
	while(i<=n)
	{
		printf("%d\n",i);
		i+=2;
	}
	return 0;
}
