//Write a C program to determine eligibility for admission to a professional
//course based on the following criteria4
//Eligibility Criteria : 
//Marks in Maths >=65 
//and Marks in Phy >=55 
//and Marks in Chem >=50 
//and Total in all three subject >=190 
//or Total in Maths and Physics >=140 
//Input the marks obtained in Physics :65 
//Input the marks obtained in Chemistry :51 
//Input the marks obtained in Mathematics :72 
//Total marks of Maths,Physics and Chemistry :188 
//Total marks of Maths and Physics : 137 
//The candidate is not eligible.

#include<stdio.h>
main()
{
	int math,phy,chem,total,total1;
	printf("Enter math marks:\n");
	scanf("%d",&math);
	printf("Enter phy marks:\n");
	scanf("%d",&phy);
	printf("Enter chem marks:\n");
	scanf("%d",&chem);
	
	total=math+phy+chem;
	total1=math+phy;
	
	printf("total in three subjects:%d \n",total);
	printf("total in math and phy subjects:%d\n",total1);
	if(total<=190 || total1<=140)
	{
		printf("It is not eligible");
	}
	else
	{
		printf("eligible");
	}
}
