#include<stdio.h>
main()
{
	int p,r,t,ammount;
	printf("enter the nummbers:");
	scanf("%d%d%d",&p,&r,&t);
	ammount = p*(1+r/100)*t;
	printf("The final interest is: %d",ammount);
}
