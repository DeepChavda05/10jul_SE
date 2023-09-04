#include <stdio.h>
int main()
{
    // your code goes here
    int i, j;
    for (i = 0; i < 5; i++) //outer loop use for the row
    {
        for (j = 0; j <= i; j++) // inner loop use for the column
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 4; i >= 0; i--) //outer loop use for the row
    {
        for (j = 0; j <= i; j++) // inner loop use for the column
        {
            printf("* ");
        }
        printf("\n");
    }
}
/*
0
01
012
0123
01234
0123
012
01
0
*
**
***
****
*****
*****
****
***
**
*
-----------------------------
     *
    * *
   * * *
  * * * *
 * * * * * 
*/