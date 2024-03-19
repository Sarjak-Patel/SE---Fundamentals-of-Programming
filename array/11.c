#include <stdio.h>
int main() 
{
    int a[5];
    int i;
    printf("Enter values:\n");
    for (i=1;i<=5;i++) 
	{
        scanf("%d",&a[i]);
    }
    printf("Array elements:\n");
    for (i=5;i>=1;i--) 
	{
        printf("%d\n",a[i]);
    }
    
}

