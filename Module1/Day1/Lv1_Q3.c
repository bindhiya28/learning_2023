#include <stdio.h>

int main()
 {
    int roll_no;
    char name[50];
    float physics, math, chemistry;
    float total, percentage;

    //Getting student data

    printf("Enter Roll No: ");
    scanf("%d", &roll_no);
    printf("Enter Name: ");
    scanf(" %[^\n]", name);
    printf("Enter Marks of Physics: ");
    scanf("%f", &physics);
    printf("Enter Marks of Math: ");
    scanf("%f", &math);
    printf("Enter Marks of Chemistry: ");
    scanf("%f", &chemistry);

    //calculating total and percentage

    total = physics + math + chemistry;
    percentage = (total / 300) * 100;

    printf("\nSummary of the Student\n");
    printf("Roll No: %d\n", roll_no);
    printf("Name: %s\n", name);
    printf("Physics: %.2f\n", physics);
    printf("Math: %.2f\n", math);
    printf("Chemistry: %.2f\n", chemistry);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    return 0;
}