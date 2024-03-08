//WAP to accept the height of a person in centimeters and categorize the
//person according to their height.
#include<stdio.h>
main()
{
	float height;
	printf("Enter Person Height:");
	scanf("%fcm",&height);
	if(height<149.86)
	{
		printf("The person is under 4ft");
	}
	else if(height<180.34)
	{
		printf("The person is under 5ft");
	}
	else if(height<190.5)
	{
		printf("The person is under 6ft");
	}
}
