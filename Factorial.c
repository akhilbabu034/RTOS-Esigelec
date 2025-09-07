//To write a function to return factorial of a number
#include <stdio.h>
int numFactorial(int num);

int main(void)
{
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    printf("Factorial of %d = %d\n", n, numFactorial(n));
    return 0;
}

int numFactorial(int num)
{
    int i, fact = 1;
    for (i = num; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}
