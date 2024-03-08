#include <stdio.h>
int main() 
{
	int i;
    float expenses[5];
    float total,average;
    printf("Enter 5 expenses:\n");
    printf("Expense");
    for (i=1;i<=5;i++) 
	{
        scanf("%f",&expenses[i]);
        total+=expenses[i];
    }
    average=total/5;
    printf("\nAverage of the 5 expenses: %.2f\n", average);
}

