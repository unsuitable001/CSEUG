#include<stdio.h>
int main()
{
	int n,i=0,sum=0;
	printf("enter range\n");
	scanf("%d",&n);
	while(n>=i)
	{
		sum+=i;
		i++;
	}
	printf("sum : %d\n",sum);
	return 0;
}
