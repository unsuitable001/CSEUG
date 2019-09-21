#include<stdio.h>
int main(){
	int yr;
	printf("Enter the year\n");
	scanf("%d",&yr);
	if(yr%400 == 0){
		printf("Leap Year!!!");
		return 0;
	}
	else if(yr%4==0 && yr%100 != 100){
		printf("Leap Year!!!");
		return 0;
	}
		printf("Not Leap Year!!!");
		return 0;
}

