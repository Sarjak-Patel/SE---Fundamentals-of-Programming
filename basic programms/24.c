#include <stdio.h>
int main() 
{
	int i;
    char names[5][10];
    float salaries[5];
    float totalsalary = 0, averagesalary;
    printf("Enter names and salaries of employees:\n");
    for (i=0;i<5;i++) 
	{
        printf("Employee name:",i+1);
        scanf("%s", names[i]);
        printf("Employee salary:",i);
        scanf("%f", &salaries[i]);
        totalsalary += salaries[i];
    }
    averagesalary = totalsalary / 5;
    printf("\nTotal salary of employees: %f\n",totalsalary);
    printf("Average salary of employees: %f\n",averagesalary);
}

