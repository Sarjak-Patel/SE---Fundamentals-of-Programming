#include<stdio.h>
main()
{
	int a[2][2],b[2][2],c[2][2];
	int i,j;
	printf("enter the 1 matrix: \n");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	printf("enter the 2 matrix: \n");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			printf("%d \t",b[i][j]);
		}
			printf("\n");
	}
		printf("the  matrix: \n");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
