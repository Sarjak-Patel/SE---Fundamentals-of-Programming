#include<stdio.h>
main()
{
	float w,l,h,final;
	printf("Enter the value:\n");
	scanf("%f %f %f",&w,&l,&h);
	
	final=2*(w*l+w*h+h*w);
	printf("Final value is: %f",final);	
}	
