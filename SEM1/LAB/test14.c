#include<stdio.h>
int main()
{
	char ch;
	printf("Select one character : \n");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
			printf("Apple\n");
			break;
		case 'A':
			printf("Apple\n");
			break;
		case 'b':
			printf("Ball\n");
			break;
		case 'B':
			printf("Ball\n");
			break;
		case 'c':
			printf("Cat\n");
			break;
		case 'C':
			printf("Cat\n");
			break;
		default :
			printf("Wrong Input");	
			break;
	}
	return 0;
}

