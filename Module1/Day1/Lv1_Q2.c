#include<stdio.h>
int main()
{
    // Grade of the students 
    int num1;
    printf("Enter the student mark\n");
    scanf("%d",&num1);
    if(num1>=90 && num1<=100)
    {
        printf("Grade A\n");
    }
    else if(num1>=75 && num1<=89)
    {
        printf("Grade B\n");
    }
    else if(num1>=60 && num1<=74)
    {
        printf("Grade C\n");
    }
    else if(num1>=50 && num1<=59)
    {
        printf("Grade D\n");
    }
    else if(num1>=0 && num1<=49)
    {
        printf("Grade F\n");
    }
    else
    {
        printf("Invalid mark");
    }
    return 0;
}