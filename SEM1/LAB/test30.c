/*fibonacci in a given range*/
#include<stdio.h>
int main()
{
	int r,i=1,prev=0,bkp;
	printf("Enter range : ");
	scanf("%d",&r);
	while(i<=r)
	{
		printf("%d\n",i);
		bkp=prev;
		prev=i;
		i+=bkp;
		
	}
	return 0;
}
