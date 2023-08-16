// sizeof() operator is use to find the size.
#include<stdio.h>
int main() {
    long double no = 100;
    int size;
    size = sizeof(no);
    printf("\nSize of the no is: %dbyte", size);
}