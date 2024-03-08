#include<stdio.h>
int main()
{
	int temp;
	printf("enter the temp:");
	scanf("%d",&temp);
	
	if(temp==0)
	{
		printf("it is a freezing weather.");
	}
	else if(temp<10)
	{
		printf("it is a very cold weater.");
	}
	else if(temp<20)
	{
		printf("it is a cold weather.");
	}
	else if(temp<30)
	{
		printf("it is a normal weather.");
	}
	else if(temp<40)
	{
		printf("it is a hot weather.");
	}
	else if(temp>=40)
	{
		printf("it is a very hot weather.");
	}
}
