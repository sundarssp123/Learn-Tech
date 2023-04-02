//Title: User-Defined Function-Arithmetic  Author:Sundar Ssp       Date:09-03-2023

#include <stdio.h>

/* Function to calculate the sum of two numbers */
int sum(int a, int b) 
{
    return a + b;
}

/* Function to calculate the difference between two numbers */
int difference(int a, int b) 
{
    return a - b;
}

/* Function to calculate the product of two numbers */
int product(int a, int b) 
{
    return a * b;
}

/* Function to calculate the quotient of two numbers */
int quotient(int a, int b) 
{
    return a / b;
}

/* Function to calculate the remainder of two numbers */
int remaindr(int a, int b) 
{
    return a % b;
}

int main() 
{
    int num1, num2, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Choose an operation to perform:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide-Quotient\n5. Divide-Remainder\n");
    scanf("%d", &choice);

    switch(choice) 
    {
        case 1:
            printf("The sum of %d and %d is %d", num1, num2, sum(num1, num2));
            break;
        case 2:
            printf("The difference between %d and %d is %d", num1, num2, difference(num1, num2));
            break;
        case 3:
            printf("The product of %d and %d is %d", num1, num2, product(num1, num2));
            break;
        case 4:
            printf("The quotient of %d and %d is %d", num1, num2, quotient(num1, num2));
            break;
        case 5:
            printf("The quotient of %d and %d is %d", num1, num2, remaindr(num1, num2));
            break;
        default:
            printf("Invalid choice!");
    }

    return 0;
}
