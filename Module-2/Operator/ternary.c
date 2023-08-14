/*
    syntax:  (condition) ? (true) : ((c) ? (t) : (f)); 
*/
#include<stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
    (a > b) ? (printf("A is max.")) : (printf("B is max."));
    return 0;
}