#include<string.h>
#include<stdio.h>
int main() {
    char a[10],b[25];
    printf("Enter the first string: ");
    // scanf("%s",a);
    gets(a);
    strcpy(b, a);
    puts(b);
    return 0;
}