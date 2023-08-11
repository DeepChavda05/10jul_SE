/*
    Arithmetic Operator
    + -> Addition
    - -> Subtraction
    * -> Multiplication
    / -> Division
    % -> Modulo(return the reminder)
    Unary Operator
    {
        ++ -> Increment(+1)
        -- -> Decrement(-1)
    }
*/
#include<stdio.h>
int main()
{
    int a,b;
    int ans;
    float div;
    printf("Enter the value fo the a and b: ");
    scanf("%d%d", &a,&b);
    ans = a+b;
    printf("\nAddition of the a and b is: %d", ans);
    ans = a-b;
    printf("\nSubtraction of the a and b is: %d", ans);
    ans = a*b;
    printf("\nMultiplication of the a and b is: %d", ans);
    div = (float)a/(float)b;
    printf("\nDivision of the a and b is: %f", div);
    ans = a%b;
    printf("\nModulo of the a and b is: %d", ans);
    a++;
    printf("\nAfter increment value of the a is: %d", a);
    --b;
    printf("\nAfter decrement value of the b is: %d", b);
    return 0;
}
/*
Assignment Operator:-
Task -> +=, -=, *=, /=, %=
a = 9, b = 2;
    a+=b -> a = a + b -> a = 9 + 2 -> a = 11;
    b-=a -> b = b - a -> b = 2 - 9 -> b = -7
    // a+=b;
    // printf("\nAfter decrement value of the b is: %d", a+=b);
*/
