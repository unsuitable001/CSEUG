#include<stdio.h>
int main()
{
	int a,b,r,a_bkp,b_bkp,lcm;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		a = a+b;
		b = a-b;
		a = a-b;
	}
		
	
	a_bkp = a;
	b_bkp = b;
	r = a%b;
	while(r!=0)
	{
		b = r;
		r = a%b;
		a = b;
	}
	lcm = (a_bkp * b_bkp)/b;
	printf("The HCF is %d\n",b);
	printf("The LCM is %d\n",lcm);
	return 0;
}
