//Write a program in C to calculate and print the electricity bill of a given customer. 
//The customer ID, name, and unit consumed by the user should be captured from 
//the keyboard to display the total amount to be paid to the customer.
#include<stdio.h>
main()
{
	int id;
	char name[10];
	int unit;
	
	printf("enter name:");
	scanf("%s",&name);
	printf("enter id:");
	scanf("%d",&id);
	printf("enter the units:");
	scanf("%d",&unit);
	
	printf("The name:%s\n",name);
	printf("The is:%d\n",id);
	
	if(unit<=350)
	{
		printf("the charge is 1.20");
	}
	else if(unit<=600)
	{
		printf("the charge is 1.50");
	}
	else if(unit<=800)
	{
		printf("the charge is 1.80");
	}
	else if(unit>800)
	{
		printf("the charge is 2.00");
	}
	else
	{
		printf("enter valid unit");
	}

	
}
