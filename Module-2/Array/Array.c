// Array is use to store the multiple value in single variable
#include <stdio.h>
int main()
{
    int i;
    // int no[10] = {1, 2, 3, 4, 5};
    int no[10];

    for (i = 0; i < 10; i++)
    {
        printf("\nEnter the value of no[%d]: ", i);
        scanf("%d", &no[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("\nValue of no[%d]: %d", i, no[i]);
    }
    return 0;
}