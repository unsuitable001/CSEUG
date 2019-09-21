#include<stdio.h>
int main()
{
	int marks,normalized;
	printf("Enter marks obtained\n");
	scanf("%d",&marks);
	normalized = marks/10;
	switch(normalized)
	{
		case 10:
		case 9:
			printf("Grade : O\n");
			break;
		case 8:
			printf("Grade : A\n");
			break;
		case 7:
			printf("Grade : B\n");
			break;
		case 6:
			printf("Grade : C\n");
			break;
		case 5:
			printf("Grade : D\n");
			break;
		default :
			printf("Fail\n");	
			break;
	}
	return 0;
}

