#include<stdio.h>
int main()
{
    char str[20], str2[20];
    FILE *fptr;
    printf("Enter a string: ");
    gets(str);
    fptr = fopen ("hello.txt", "a"); // write mode to create file if not exist, else overwrite the existing one
    fprintf(fptr, "%s", str);
    fclose(fptr);
    fptr = fopen ("hello.txt", "r"); // write mode to create file if not exist, else overwrite the existing one
    fscanf(fptr, "%s", &str2);
    printf("%s", str2);
    fclose(fptr);
    return 0;
}