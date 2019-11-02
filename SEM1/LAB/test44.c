#include<stdio.h>
void convert(int x, int base)
{
	int rem;
	if(x!=0)
	{
	convert(x/base,base);
	rem = x%base;
	if(rem>9)
		printf("%c",rem+55);
	else
		printf("%d",rem);
	}
	
}
int main()
{
	int dec,base;
	printf("Enter a value\n");
	scanf("%d",&dec);
	printf("Enter a base\n");
	scanf("%d",&base);
	convert(dec,base);
	printf("\n");
	return 0;
}

