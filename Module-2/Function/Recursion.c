// WAP to find the factorial using recursion

#include<stdio.h>
int facto(int no)
{
    if (no <= 1 )
    {
        return 1;
    }
    return no* facto(no-1);
}
int main()
{
    int no;
    printf("Enter the no: ");
    scanf("%d", &no);
    printf("Factorial = %d", facto(no));
    return 0;
}