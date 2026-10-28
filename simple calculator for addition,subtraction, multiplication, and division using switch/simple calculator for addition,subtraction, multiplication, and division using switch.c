//10.Write a C program to create a simple calculator for addition,
//subtraction, multiplication, and division using switch.


#include <stdio.h>
void main()
{
    float a, b;
    char op;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (op)
    {
        case '+':
            printf("Result = %.2f", a + b);
            break;
        case '-':
            printf("Result = %.2f", a - b);
            break;
        case '*':
            printf("Result = %.2f", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero is not possible");
            break;
        default:
            printf("Invalid operator");
    }
}

