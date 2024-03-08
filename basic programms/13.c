//convert ascii value  for alphabet from small to large.

#include<stdio.h>
char main()
{
	char small,large;
	int l;
	char s;
  /*	printf("enter large value:");
	scanf("%c",&large); 
	small=large+32;
	printf("large value:%c\n",small);
	printf("\n");*/
	
//	printf("enter small value:\n");
//	scanf("%c",&small); 
//	large=small-32;
//	printf("large value:%c",large);
	
	
	printf("enter large value:\n");
	scanf("%d",&l); 
	s=l +32;
	printf("small value:%c\n",s);

	printf("enter small value:\n");
	scanf("%d",&l); 
	s=l+32;
	printf("large value:%c",s);	
	
}
