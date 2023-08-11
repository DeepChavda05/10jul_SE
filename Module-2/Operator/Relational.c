/*
    < -> Less then
    <= -> Less then or equal to
    > ->  Grater then or equal to
    >= -> Grater then or equal to
    == -> Equal to
    != -> Not equal to
*/
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);
    if(a > b)
    {
        printf("\n%d is max.", a);
    }
    else
    {
        printf("\n%d is max..", b);
    }
}