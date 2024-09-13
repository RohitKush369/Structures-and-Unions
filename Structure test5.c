//Write a program to calculate the total salary (basic_salary + da + hra)
// for each employee and display it. Take input for 2 employees.
#include<stdio.h>
int  main()
{
    struct employee{

    int ID;
    char name[50];
    float basic_salary;
    float da;
    float hra;
    };
    struct employee total_salary;
    float totalsalary;
    printf("Enter the first employee details:");
    printf("Enter the ID:");
    scanf("%d",&total_salary.ID);

    printf("Enter the name:");
    scanf("%s",total_salary.name);

    printf("Enter the basic salary:");
    scanf("%f",&total_salary.basic_salary);

    printf("Enter the da:");
    scanf("%f",&total_salary.da);

    printf("Enter the har:");
    scanf("%f",&total_salary.hra);

    totalsalary=total_salary.basic_salary+total_salary.da+total_salary.hra;
    printf("totalsalary=%f\n",totalsalary);

     printf("Enter the second employee details:");
       printf("Enter the ID:");
    scanf("%d",&total_salary.ID);

    printf("Enter the name:");
    scanf("%s",total_salary.name);

    printf("Enter the basic salary:");
    scanf("%f",&total_salary.basic_salary);

    printf("Enter the da:");
    scanf("%f",&total_salary.da);

    printf("Enter the har:");
    scanf("%f",&total_salary.hra);
 printf("totalsalary=%f",totalsalary);

}
