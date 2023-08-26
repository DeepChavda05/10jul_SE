// WAP to check no is positive, negative or neutral 
#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num > 0)
    {
        printf("\nThe entered number %d is POSITIVE\n", num);
    }
    else if (num < 0)
    {
        printf("\nThe entered number %d is NEGATIVE\n", num);
    }
    else{
        printf("\nThe entered number %d is NEUTRAL\n", num);
    }
}