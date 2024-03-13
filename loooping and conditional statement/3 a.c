#include<stdio.h>
main()
{
	int i,a;
	printf("enter numbers:");
	scanf("%d%d",&i,&i);
//	while(i%2==0)     //How many Even numbers are there
//	{
//		printf("%d",i);
//		i++;
//	}

//	while(i!=2)
//	{
//		printf("%d",i);
//		i++;
//	}

	while(i%2==0)      //Sum of even numbers
	{
		a=i+i;
		printf("%d+%d=%d",i,i,a);
		i++;
	}

//	while()           //Sum of odd numbers
//	{
//		
//	}
}
