#include<stdio.h>
main()
{
	int a,b,choice,total;
	printf("=====CALCULATOR=====\n");
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	printf("enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: total=a+b;
				printf("you have choose addition:%d",total);
				break;
		case 2: total=a-b;
				printf("you have choose subtraction:%d",total);
				break;
		case 3: total=a*b;
				printf("you have choose multiplication:%d",total);
				break;
		case 4: total=a/b;
				printf("you have choose division:%d",total);
				break;
		case 5: total=a%b;
				printf("you have choose modulo:%d",total);
				break;
		default: printf("this is invalid output");	
				break;	
	}
}
