//Write a program in C to read any Month Number in integer and display the
//number of days for this month.
#include<stdio.h>
main()
{
	int month;
	printf("Enter the month:");
	scanf("%d",&month);
	switch(month)
	{
		case 1:printf("30");
		break;
		case 2:printf("28");
		break;
		case 3:printf("30");
		break;
		case 4:printf("31");
		break;
		case 5:printf("30");
		break;
		case 6:printf("31");
		break;
		case 7:printf("30");
		break;
		case 8:printf("31");
		break;
		case 9:printf("30");
		break;
		case 10:printf("31");
		break;
		case 11:printf("30");
		break;
		case 12:printf("31");
		break;
		default: printf("choose properly");
		break;
	}
}
