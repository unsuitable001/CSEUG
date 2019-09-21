#include<stdio.h>
int main()
{
	int a=1,range;
	printf("Enter range\n");
	scanf("%d",&range);
	while(a<=range)
	{
		printf("%d\n",a);
		a++;
	}
	return 0;
}

