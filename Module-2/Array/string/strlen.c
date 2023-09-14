// WAP to calculate the length of the string using strlen function
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    int len;
    printf("Enter a String: ");
    gets(str);
    len = strlen(str);
    printf("\nLength = %d",len);
    return 0;
}