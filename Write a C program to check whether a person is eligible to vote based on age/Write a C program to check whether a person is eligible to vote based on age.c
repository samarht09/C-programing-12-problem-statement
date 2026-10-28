// 6.Write a C program to check whether a person is eligible to
//vote based on age.

#include<stdio.h>
void main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("Eligible for voting");
    }
    else
    {
        printf("Not eligible for voting");
    }
}
