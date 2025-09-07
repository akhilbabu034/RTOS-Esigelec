//To take name and age as input and print a greeting
#include<stdio.h>
void main(void)
{
    char name[20];
    int age;
    printf("Enter you name:\n");
    scanf("%s",name);
    printf("Enter you age:");
    scanf("%d",&age);
    printf("Hi %s, Have a good day!\n",name);
}