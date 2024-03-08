//c program to check whether a character is vowel or constont.
//i use here switch condition because i have to give limited option like a,e,i,o,u. 
//other wise i had to use and condition
#include<stdio.h>
main()
{
	char alphabate;
	printf("enter the alphabate:");
	scanf("%c",&alphabate);
	switch(alphabate)
	{
		case 'a':printf("its vowel");
		break;
		
		case 'e':printf("its vowel");
		break;
		
		case 'i':printf("its vowel");
		break;
		
		case 'o':printf("its vowel");
		break;
		
		case 'u':printf("its vowel");
		break;
	}
	printf("its constant");
}
