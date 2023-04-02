//Title:Structure+Array   Author:Sundar Ssp    Date:29-03-2023

#include<stdio.h>

struct employee
{
    int id;
    char name[10];
    float salary;    
};

int main()
{ 
    struct employee emp[10];
    printf("Enter the employee details\n");

    printf("Enter the employee ID: ");
    scanf("%d",&emp[0].id);

    printf("Enter the employee Name: ");
    scanf("%s",&emp[0].name);

    printf("Enter the employee Salary: ");
    scanf("%f",&emp[0].salary);

    printf("The Employee Deatails are\n");
    printf("ID:%d\tName:%s\tSalary:%f\n",emp[0].id,emp[0].name,emp[0].salary);
    return 0;
}
