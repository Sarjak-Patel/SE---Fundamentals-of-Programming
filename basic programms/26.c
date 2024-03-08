//(n-32)*0.5 //to find celcious

//(c*1.8)-32 //to find f
#include<stdio.h>
main()
{
	float f,c;
	printf("enter f:");
	scanf("%f",&f);
	
	c=(f-32)*5/9;
	printf("the value:%f\n",c);
	
	printf("enter c:");
	scanf("%f",&c);
	
	f=(c*1.8)+32;
	printf("the value:%f",f);
}
