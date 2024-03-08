//.Accept 5 numbers from user and perform sum of array

#include<stdio.h>
main()
{
	int a[5],i,sum;
	printf("enter total five numbers:");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&a);
	}
	for(i=1;i<=5;i++)
	{
		sum += a[i];
	}
	printf("the answers is:%d",sum);
}
