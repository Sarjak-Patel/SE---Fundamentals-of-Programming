#include<stdio.h>
#include<string.h>
main() 
{
    char countryname[] = "countryname";
    char abbreviation[5]; 
    int i, j;
    abbreviation[j++] = countryname[0];
    for (i = 1; countryname[i] != '\0'; i++) 
	{
        if (countryname[i - 1] == ' ' && countryname[i] != ' ') 
		{
            abbreviation[j++] = countryname[i]; 
        }
    }
    abbreviation[j] = '\0';
    printf("Abbreviation: %s\n", abbreviation);
}

