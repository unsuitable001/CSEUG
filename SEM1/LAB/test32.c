/*1-1/2!+1/3!-.......+1/n!*/
#include<stdio.h>
/*float fac(int x)
{
	int i,f=1;
	i=x;
	while(i)
	{
		f*=i;
		i--;
	}
	return f;
}*/
int main()
{
	int n,i=1,flag=0,j;
	float res=0,f=1;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(i<=n)
	{
		f*=i;
		if(flag)
		{
		res-=(1/f);
		}
		else
		{
		res+=(1/f);
		}
		flag=!flag;
		i++;
	}
	printf("Result : %f\n",res);
	return 0;
}
