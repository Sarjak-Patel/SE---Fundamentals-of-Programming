//WAP to find maximum number among 3 numbers using ternary operator
#include<stdio.h>
main()
{
	int a,b,c,max;
	printf("enter total 3  numbers: \n");
	scanf("%d %d %d",&a,&b,&c);
	max= (a>b && a>c || b>a && b>c || c>a && c>b) ? a:b:c;
	printf("the large number is:%d",max);
}
