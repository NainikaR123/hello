#include<stdio.h>
int mul(int n1, int n2)
{
    return n1*n2;
}

int main()
{
    int n1, n2, result;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    result = mul(n1, n2);

    printf("The multipication is: %d\n", result);

    return 0;
}

 
