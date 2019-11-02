#include<stdio.h>
#include<math.h>
int BintoD(int x)
{
	int decimal=0,i=0;
	while(x)
	{
		decimal+=((int)pow(2,i))*(x%10);
		x/=10;
		i++;
	}
	return decimal;
}
int main()
{
	int bin;
	printf("Enter a binary number\n");
	scanf("%d",&bin);
	printf("%d\n",BintoD(bin));
	return 0;
}

