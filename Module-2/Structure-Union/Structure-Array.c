// WAP to get the student data using structure
#include <stdio.h>
struct Student
{
    char name[20];
    int roll;
};
int main()
{
    int count = 3;
    struct Student st[count]; // object creation
    int i;
    for (i = 0; i < count; i++)    
    {
        printf("Enter your Name: ");
        scanf("%s", &st[i].name); // %s is for string
        printf("\n");
        printf("Enter Roll Number:");
        scanf("%d", &st[i].roll); //%d is for integer
    }
    printf("\nName:\tRoll no.:\n");
    for (i = 0; i < count; i++)
    {
        // printf("\nName:%s\tRoll No.: %d ", st[i].name, st[i].roll); /*&st.name means address*/
        printf("\n%s\t %d ", st[i].name, st[i].roll); /*&st.name means address*/
    } 
}