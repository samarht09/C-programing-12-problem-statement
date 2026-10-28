//8.Write a C program to calculate the electricity bill based on
//units consumed using an else-if ladder.
//Assumed slab rates for this practical:
//- First 100 units: ₹1.50 per unit
//- Next 100 units: ₹2.50 per unit
//- Next 100 units: ₹4.00 per unit
//- Above 300 units: ₹5.00 per unit


#include <stdio.h>

void main()
{
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units < 0)
        printf("Invalid units");
    else if (units <= 100)
    {
        bill = units * 1.50;
        printf("Electricity bill = Rs. %.2f", bill);
    }
    else if (units <= 200)
    {
        bill = 100 * 1.50 + (units - 100) * 2.50;
        printf("Electricity bill = Rs. %.2f", bill);
    }
    else if (units <= 300)
    {
        bill = 100 * 1.50 + 100 * 2.50
               + (units - 200) * 4.00;
        printf("Electricity bill = Rs. %.2f", bill);
    }
    else
    {
        bill = 100 * 1.50 + 100 * 2.50
               + 100 * 4.00 + (units - 300) * 5.00;
        printf("Electricity bill = Rs. %.2f", bill);
    }
}
