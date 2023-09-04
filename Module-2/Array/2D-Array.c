#include<stdio.h>
int main()
{
    int i, j;
    int array[3][3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    for(i=0 ; i<= 2 ; ++i) //for loop to print the elements of a row
    {
        for (j = 0; j < 3; j++)
        {
            printf("Value of the array[%d][%d]: %d", i, j, array[i][j]);
            printf("\n");
        }
        
    }
}
/*
Create a 3x3 Matrix
1 2 3
4 5 6
7 8 9
*/