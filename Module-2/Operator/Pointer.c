// Pointer is use to store the address of the other variable.
#include<stdio.h>
int main()
{
    int a = 100, b;
    int *ptr, *ptr2;
    ptr = &a;
    ptr2 = &b;
    printf("Address of the a is: %d", ptr2);
    printf("\nValue of the a is: %d", *ptr);
    return 0;
}