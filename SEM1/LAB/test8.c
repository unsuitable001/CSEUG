#include<stdio.h>
void main(){
	int a,b,c,max=0,min=0;
	printf("Enter three Number\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c){
		max = a;
		if(b>c){
		min = c;
		}
		else{
		min = b;
		}
	}
	else if(b>a && b>c){
		max = b;
		if(a>c){
		min = c;
		}
		else{
		min = a;
		}
	}
	else{
		max = c;
		if(a>b){
		min = b;
		}
		else{
		min = a;
		}
	}
	printf("%d is the maximum\n",max);
	printf("%d is the minimum\n",min);
}
