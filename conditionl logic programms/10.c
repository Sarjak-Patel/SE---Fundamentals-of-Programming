//c programming to check wether a number is postive or negative or zero.
//here i use ladder condition for choice.
#include<stdio.h>
main()
{
	int a;
	printf("enter the value:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("its positive number");
	}
	else if(a<0)
	{
		printf("its negative number");
	}
	else if(a==0)
	{
		printf("its zero number");	
	}	
}
