#include<stdio.h>
// 
void main(){
	int a,b,c,max=0,min=0;
	printf("Enter three Number\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c){
		max = a;
	}
	else if(b>a && b>c){
		max = b;
	}
	else{
		max = c;
	}
	if(a<b && a<c){
		min = a;
	}
	else if(b<a && b<c){
		min = b;
	}
	else{
		min = c;
	}
	printf("%d is the maximum\n",max);
	printf("%d is the minimum\n",min);
}
