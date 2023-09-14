// strcmp() is use to compare the two string
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20], str2[20];
    int cmp;
    printf("Enter first String: "); // Taking input from user for 1st string
    scanf("%s", &str1);
    printf("\n Enter second String :");
    scanf("%s", &str2); // Taking Input From User For Second String
    cmp = strcmp(str1, str2);
    if (cmp < 0)
    {
        printf("'%s' Is Max String.\n", str2);
    }
    else if (cmp > 0)
    {
        printf("'%s' Is Max String\n ", str1);
    }
    else
    {
        printf("Both are equal strings.");
    }
}