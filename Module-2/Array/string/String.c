#include<stdio.h>
int main()
{
    // char nm[20] = {'a','b','c','d','e'};// create the the string
    // char nm[20] = {"abcde"};
    char nm[20];
    printf("Enter your name: ");
    // scanf("%s",&nm);
    gets(nm);// read a line from keyboard and store it in array
    // printf("Your name is: %s", nm);
    puts(nm);
}