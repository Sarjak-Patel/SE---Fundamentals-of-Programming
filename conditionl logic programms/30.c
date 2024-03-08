//If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be
// of Rs. 256/-
#include<stdio.h>
main()
{
	int bill;
	printf("Enter the Bill Amount:");
	scanf("%d",&bill);
	printf("The amount is :%d.Rs \n",bill);
	if(bill>800)
	{
		printf("the charge will be 18%");
	}
	else(bill==256);
	{
		printf("it is minimum value.");
	}
}
