/*
    && - logical And
    || - Logical Or
    ! - Logical Not
*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: "); // Input from user
    scanf("%d %d", &a, &b);
    if (!((a > 0) || (b < 0)))
    {
        printf("\nTrue.");
    }
    else
    {
        printf("\nFalse");
    }
    return 0;
}