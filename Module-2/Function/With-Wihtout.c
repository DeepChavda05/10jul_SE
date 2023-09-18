// WAP use of with return type without parameter
#include<stdio.h>
int a, b;
int get() {
    printf("Enter the value of the a and b: ");
    scanf("%d %d", &a, &b);
    return 0;
}
int mod(){
    return (a%b);
};
void main () {
    get(); // calling function to take input from user
    printf("\nThe remainder is : %d\n",mod());   //calling function for output
}