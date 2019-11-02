/*x-x3/3!+x5/5!.........*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x,i=1,flag=0,j;
	float res=0,f=1;
	printf("Enter a number : ");
	scanf("%d",&x);
	while(i<=x)
	{
		f*=i;
		if(flag)
		{
		res-=(pow(x,i)/f);
		}
		else
		{
		res+=(pow(x,i)/f);
		}
		flag=!flag;
		i+=2;
	}
	printf("Result : %f\n",res);
	return 0;
}
