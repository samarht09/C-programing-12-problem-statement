//7.Write a C program to calculate and display the grade of a
//student based on marks using an else-if ladder.

//Assumed grading scale:
//Marks	       Grade
//90–100         A
//80–89	         B
//70–79	         C
//60–69	         D
//40–59	         E
//Below 40      Fail
#include<stdio.h>
void main()
{
    int marks;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
        printf("Invalid marks");
    else if (marks >= 90)
        printf("Grade A");
    else if (marks >= 80)
        printf("Grade B");
    else if (marks >= 70)
        printf("Grade C");
    else if (marks >= 60)
        printf("Grade D");
    else if (marks >= 40)
        printf("Grade E");
    else
        printf("Fail");
}
