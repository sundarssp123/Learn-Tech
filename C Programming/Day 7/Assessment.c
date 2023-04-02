//Title:Structure-Assessment   Author:Sundar Ssp    Date:01-04-2023

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
    int num_emp;

    printf("Enter the number of employees: ");
    scanf("%d", &num_emp);

    printf("Enter the employee details\n");
    for(int i=0; i<num_emp; i++)
    {
        printf("Enter the employee ID: ");
        scanf("%d",&emp[i].id);

        printf("Enter the employee Name: ");
        scanf("%s",&emp[i].name);

        printf("Enter the employee Salary: ");
        scanf("%f",&emp[i].salary);

        printf("The Employee Details are\n");
        printf("ID:%d\tName:%s\tSalary:%f\n",emp[i].id,emp[i].name,emp[i].salary);
    }

    printf("\nAll employee records:\n");
    for(int i=0; i<num_emp; i++)
    {
        printf("ID:%d\tName:%s\tSalary:%f\n",emp[i].id,emp[i].name,emp[i].salary);
    }

    return 0;
}
