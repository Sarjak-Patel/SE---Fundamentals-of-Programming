//Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
main()
{
	int cp,pp,total;
	printf("enter first the value:");
	scanf("%d",&cp);
	printf("enter the second value:");
	scanf("%d",&pp);
	if(pp>cp)
	{
		total=pp-cp;
		printf("Profit is:%d \n",total);
	}
	else(cp>pp);
	{
		total=cp-pp;
		printf("loss is:%d",total);
	}
	
}
