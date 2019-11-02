/*x+x2/2!+.........*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x,i=1,j;
	float res=0,f=1;
	printf("Enter x : ");
	scanf("%d",&x);
	while(i<=x)
	{
		f*=i;
		res+=(pow(x,i)/f);
		i++;
	}
	printf("Result : %f\n",res);
	return 0;
}
