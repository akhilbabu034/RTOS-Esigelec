#include <stdio.h>
void main(void) 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    //if
    if (num > 0) {
        printf("The number is positive.\n");
    }

    //if-else
    if (num % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    //if-else if-else
    if (num > 100) {
        printf("The number is greater than 100.\n");
    } else if (num >= 50) {
        printf("The number is between 50 and 100.\n");
    } else {
        printf("The number is less than 50.\n");
    }

    //switch case
    switch (num) {
        case 1:  printf("Number is ONE.\n"); break;
        case 2:  printf("Number is TWO.\n"); break;
        case 3:  printf("Number is THREE.\n"); break;
        default: printf("Number is not 1, 2, or 3.\n");
    }

    //Ternary operator
    (num % 5 == 0) ? printf("The number is divisible by 5.\n") : printf("The number is not divisible by 5.\n");
}
