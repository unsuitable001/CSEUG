#include<stdio.h>
int main()
{
	int row,i=1,j,x;
	printf("Enter number of rows\n");
	scanf("%d",&row);
	while(i<=row)
	{
		x=0;
		j=row-i;
		i=row-j;
		while(j)
		{
			printf(" ");
			j--;
		}
		while(x<i)
		{
			printf("*");
			x++;
		}
		//part of pyramid | otherwise triangle
		x--;
		while(x)
		{
			printf("*");
			x--;
		}
		//part of pyramid
		printf("\n");
		i++;
	}
	return 0;
}

