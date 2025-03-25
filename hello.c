 #include <stdio.h>
float divide(int numerator, int denominator) 
{
    if (denominator == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0;  
    }
    return (float)numerator / denominator;  
}

int main()
{
    int num, denom;
    float result;

    printf("Enter the numerator: ");
    scanf("%d", &num);

    printf("Enter the denominator: ");
    scanf("%d", &denom);

    result = divide(num, denom);

    if (result != 0) 
    {  
        printf("Result: %.2f\n", result);
    }

    return 0;
}
