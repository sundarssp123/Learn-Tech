//Title:Structure   Author:Sundar Ssp    Date:29-03-2023

#include<stdio.h>

struct employee
{
    int id;
    char name[10];
    float salary;    
};

int main()
{ 
    struct employee emp;
    printf("Enter the employee details\n");

    printf("Enter the employee ID: ");
    scanf("%d",&emp.id);

    printf("Enter the employee Name: ");
    scanf("%s",&emp.name);

    printf("Enter the employee Salary: ");
    scanf("%f",&emp.salary);

    printf("The Employee Deatails are\n");
    printf("ID:%d\tName:%s\tSalary:%f\n",emp.id,emp.name,emp.salary);
    return 0;
}
