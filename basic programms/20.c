#include<stdio.h>
main()
{
	int monthly_salary,remain_salary,final_salary;
	
	printf("Enter the monthly salary:");
	scanf("%d",&monthly_salary);
	remain_salary=monthly_salary/(20*100);
	final_salary=monthly_salary-remain_salary;
	printf("The remain salary is: %d",final_salary);
}
