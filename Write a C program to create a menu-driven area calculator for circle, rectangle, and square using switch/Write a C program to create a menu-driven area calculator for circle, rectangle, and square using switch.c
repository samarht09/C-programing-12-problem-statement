//11.Write a C program to create a menu-driven area calculator
//for circle, rectangle, and square using switch.


#include <stdio.h>
void main()
{
    int choice;
    float r, length, breadth, side;

    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Square\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &r);
            printf("Area of circle = %.2f", 3.14159 * r * r);
            break;

        case 2:
            printf("Enter length and breadth: ");
            scanf("%f %f", &length, &breadth);
            printf("Area of rectangle = %.2f",
                   length * breadth);
            break;

        case 3:
            printf("Enter side: ");
            scanf("%f", &side);
            printf("Area of square = %.2f", side * side);
            break;

        default:
            printf("Invalid choice");
    }
}
