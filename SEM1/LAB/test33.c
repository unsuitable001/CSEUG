/*P(n,r)=n!(n−r)! nCr = n! / r! * (n - r)! */
#include<stdio.h>
int fac(int x)
{
	int i,f=1;
	i=x;
	while(i)
	{
		f*=i;
		i--;
	}
	return f;
}
int main()
{
	int n,r;
	printf("Enter n : ");
	scanf("%d",&n);
	printf("Enter r : ");
	scanf("%d",&r);
	printf("%dP%d = %d\n",n,r,(fac(n)*fac(n-r)));
	printf("%dC%d = %d\n",n,r,(fac(n)/(fac(r)*fac(n-r))));
	return 0;
}
