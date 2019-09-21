#include<stdio.h>
int main()
{
	int a=1,range;
	printf("Enter range\n");
	scanf("%d",&range);
	do
	{
		printf("%d\n",a);
		a++;
	}
	while(a<=range);
	return 0;
}

