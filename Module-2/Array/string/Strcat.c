// strcat() is use to merge the 2 string
#include<string.h>
#include<stdio.h>
int main()
{
    char fnm[20], lnm[20];
    printf("Enter your first name: "); // Entering First Name
    gets(fnm);
    printf("\n");   
    printf("Enter your last name : ");   // Entering Last Name
    gets(lnm);
    strcat(fnm, lnm);
    printf("Your full name is: %s", fnm) ;    // Merging both names and printing it out
    return 0;
}