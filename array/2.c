#include<stdio.h>
main()
{
	int add,sub,mul,div,n1,n2,option;
	printf("Enter the first number:");
	scanf("%d",&n1);
	printf("Enetr the second number:");
	scanf("%d",&n2);
	printf("select your choice:");
			scanf("%d",&option);
	switch(option)
	{
		case 1:	add=n1+n2;
				printf("result is:%d",add);
				break;
		case 2:	sub=n1-n2;
				printf("result is:%d",sub);
				break;	
		case 3:	mul=n1*n2;
				printf("result is:%d",mul);
				break;
		case 4:	div=n1/n2;
				printf("result is:%d",div);
				break;					
	}
}
