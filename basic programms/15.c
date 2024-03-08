#include<stdio.h>
#include<string.h>
main() 
{
    char schoolName[] = "SchoolName";
    char abbreviation[5]; 
    int i, j;
    abbreviation[j++] = schoolName[0];
    for (i = 1; schoolName[i] != '\0'; i++) 
	{
        if (schoolName[i - 1] == ' ' && schoolName[i] != ' ') 
		{
            abbreviation[j++] = schoolName[i]; 
        }
    }
    abbreviation[j] = '\0';
    printf("Abbreviation: %s\n", abbreviation);
}

