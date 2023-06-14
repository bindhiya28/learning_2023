#include<stdio.h>
int main()
{
    // using if-else
    int num1,num2;
    printf("Enter the two number\n");
    scanf("%d %d\n",&num1,&num2);
    if(num1>num2)
    {
        printf("output using if-else : %d",num1);
    }
    else{
        printf("output using if-else : %d\n",num2);
    }
    //using ternary operator
    int biggest = num1>num2 ? num1 : num2;
    printf("output using ternary operator : %d\n",biggest);
    return 0;
}