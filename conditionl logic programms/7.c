#include<stdio.h>
main()
{
	int score;
	printf("enter your score:");
	scanf("%d",&score);
	if(score>=81)
	{
		printf("your grade is A");
	}
	else if(score>=71)
	{
		printf("your grade is B");
	}
	else if(score>=61)
	{
		printf("your grade is C");
	}
	else if(score>=51)
	{
		printf("your grade is D");
	}
	else if(score>=41)
	{
		printf("your grade is E");
	}
	else if(score>=1)
	{
		printf("your have FAIL");
	}
}
