#include<stdio.h>
int main()
{
	int a,i=2;
	printf("Enter a number\n");
	scanf("%d",&a);
	if(a==0){
	printf("not prime\n");
	return 0;
	}
	while(i<a){
		if(a%i==0){
			printf("not prime\n");
			return 0;
		}
		else{
			i++;
		}
	}
	printf("prime\n");
	return 0;
}

