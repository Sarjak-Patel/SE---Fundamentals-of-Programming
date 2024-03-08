//WAP to accept 5 students name and store it in array.
#include<stdio.h>
#include<string.h>
main() 
{
    char name[5][100];
    int i;
    printf("Enter 5 students names:\n");
    for(i=0; i<5;i++) 
	{
        scanf("%s",&name[i]);
    }
    printf("Displaying five students names:\n");
    for(i=0;i<5;i++) 
	{
        printf("%s\n", name[i]); 
    }

}

