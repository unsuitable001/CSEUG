#include<stdio.h>
int main()
{
	int y,m,d,td;
	printf("Enter YYYY MM DD\n");
	scanf("%d%d%d",&y,&m,&d);
	td = d-1;
	switch(m-1){
		case 11:
			td+=30;
		case 10:
			td+=31;
		case 9:
			td+=30;
		case 8:
			td+=31;
		case 7:
			td+=31;
		case 6:
			td+=30;
		case 5:
			td+=31;
		case 4:
			td+=30;
		case 3:
			td+=31;
		case 2:
			td+=(y%4==0?29:28);
		case 1:
			td+=31;
		}
	printf("total days %d spent\n",td);
	return 0;
}

