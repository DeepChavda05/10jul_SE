// WAP to get the student data using structure
#include<stdio.h>
struct Student{
    char name[20];
    int roll;
}st;
int main(){
    printf("Enter your Name: ");
    scanf("%s", &st.name); // %s is for string
    printf("\n");
    printf("Enter Roll Number:");
    scanf("%d",&st.roll);//%d is for integer
    printf("\nName:%s\tRoll No.: %d ", st.name, st.roll );  /*&st.name means address*/
}