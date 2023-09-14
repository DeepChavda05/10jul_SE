// WAP to make the addition using UDF function
#include<stdio.h>
int a, b;
void getdata()
{
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
}
void add()
{
    int add = a + b;
    printf("Addition = %d", add);
}
int main()
{
    getdata();
    add();
}