//4. Write a C program to find the greatest of three numbers using nested if
#include <stdio.h>

void main()
{
    int a, b, c;
    int greatest;

    printf("Enter 3 values:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b)
    {
        if (a >= c)
        {
            greatest = a;
        }
        else
        {
            greatest = c;
        }
    }
    else
    {
        if (b >= c)
        {
            greatest = b;
        }
        else
        {
            greatest = c;
        }
    }

    printf("Greatest value: %d\n", greatest);
}
