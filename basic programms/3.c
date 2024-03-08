// area of circle --> formula 3.14 pie 22/7 r*r;

#include<stdio.h>
#define PI 3.14
float main()
{
	float r,area;
	printf("enter radius value:");
	scanf("%f",&r);
	
	area=PI*r*r;
	printf("area of circule is: %.2lf",area);
}
