#include<stdio.h>
char lowToUP(char x)
{
	return x>96?x-(char)32:x;
}
int main()
{
	char lower;
	printf("Enter a lowercase letter\n");
	scanf("%c",&lower);
	printf("UPPERCASE : %c\n",lowToUP(lower));
	return 0;
}

