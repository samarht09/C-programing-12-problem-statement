//12.Write a C program to check whether a number is even or odd
//using the conditional operator (?:).

#include <stdio.h>

void main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    (num % 2 == 0) ?
        printf("Even number") :
        printf("Odd number");
}
