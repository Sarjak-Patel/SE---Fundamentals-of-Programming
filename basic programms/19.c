#include<stdio.h>
main()
{
	int p,ammount,interest;
	printf("enter the nummbers:");
	scanf("%d %d",&ammount,&p);
	interest = ammount-p;
	printf("The final interest is: %d",interest);
}
