#include<stdio.h>
void data(int, int); //define the function
void reference(int *);
int main()
{
    int a, b;
    printf("Enter the 2 number: ");
    scanf("%d %d", &a, &b);
    data(a, b); //call by value
    reference(&a); // Call by reference
}
void data(int a, int b){ //initialize the function
    printf("a=%d\n", a);
    printf("b=%d\n", b);
}
void reference(int *ptr){
    printf("ptr=%d\n", ptr);
}