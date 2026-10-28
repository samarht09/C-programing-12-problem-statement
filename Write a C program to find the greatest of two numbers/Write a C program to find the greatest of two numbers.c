//3.Write a C program to find the greatest of two numbers.
#include <stdio.h>

void main()
{
    int a, b;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("%d is greater than %d\n", a, b);
    }
    else if (b > a)
    {
        printf("%d is greater than %d\n", b, a);
    }
    else
    {
        printf("Both numbers are equal.\n");
    }
}
