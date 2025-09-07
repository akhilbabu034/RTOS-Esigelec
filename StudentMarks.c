//To store and display marks of 5 students
#include<stdio.h>
void main(void)
{
    int i, marks[5] = {23,45,69,15,99};
    printf("Student Marks\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",marks[i]);
    }
}