#include<stdio.h>
int main()
{
	int marks;
	printf("Enter marks obtained\n");
	scanf("%d",&marks);
	if(marks >= 90){
		printf("Grade : O\n");
	}
	else if(marks >= 80)
	{
		printf("Grade : A\n");
	}
	else if(marks >= 70)
	{
		printf("Grade : B\n");
	}
	else if(marks >= 60)
	{
		printf("Grade : C\n");
	}
	else if(marks >= 50)
	{
		printf("Grade : D\n");
	}
	else
	{
		printf("Fail\n");
	}
	return 0;
}
