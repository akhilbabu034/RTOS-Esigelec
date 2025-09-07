//#To take 5 students name and marks and print toppers name
#include<stdio.h>
void main(void)
{
    int i,marks[5],max=0;
    printf("Enter the student marks:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        if(marks[i]>max)
        {
            max=marks[i];
        }
    }
    printf("Topper student marks is %d\n",max);
}