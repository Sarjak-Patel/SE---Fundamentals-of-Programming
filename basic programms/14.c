#include<stdio.h>
int main()
{
	int small,large;
	printf("print small number:");
	scanf("%d",&small);
	large=small+32;
	printf("large value:%d\n",large);
	
	printf("print large number:");
	scanf("%d",&large);
	small=large-32;
	printf("small value:%d",small);
}
