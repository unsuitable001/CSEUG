#include<stdio.h>
int main()
{
	int i=0,row,j=0;
	printf("enter number of rows : \n");
	scanf("%d",&row);
	while(i<row)
	{
		while(j<=i)
		{
			printf("*");
			j++;
		}
		j=0;
		printf("\n");
		i++;
	}
	return 0;
}
