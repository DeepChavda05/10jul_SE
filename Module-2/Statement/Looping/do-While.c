// Do while loop is exit control loop
// WAP to print 1 to 10 using do-while
#include<stdio.h>
int main() {
    int i;
    i = 1;
    do
    {
        printf("%d\n", i);
        i++; //increment by 1
    }while (i <= 10);
    return 0;
}