//Print even number from 1 to 20
#include<stdio.h>
void main(void)
{
    int i;
    for(i=1;i<=20;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
}