
//Title:Control Statements-Switch Case  Author:Sundar Ssp       Date:10-02-2023

#include<stdio.h>

int number1,number2;
char choice;

int main()
{
    printf("'+' For Addition\t'-' For Subtraction\t'*' For Multiplication\t '\\' For Division\n");
    printf("Enter Your Choice: ");
    scanf("%c",&choice);

    printf("Enter Number1 and NUmber2: ");
    scanf("%d %d",&number1,&number2);

    switch(choice)
    {
        case '+':
        {
            printf("You have selected addition operation\n");
            printf("The Addition Result is: %d\n",number1+number2);
            break;
        }
        case '-':
        {
            printf("You have selected subtraction operation\n");
            printf("The subtraction Result is: %d\n",number1-number2);
            break;
        }
        case '*':
        {
            printf("You have selected multiplication operation\n");
            printf("The Multiplication Result is: %d\n",number1*number2);
            break;
        }
        case '/':
        {
            printf("You have selected division operation\n");
            printf("The Division Result is: %d\n",number1/number2);
            break;
        }        
        default:
        {
            printf("You have choosen invalid option!\n");
            break;
        }
    }
    return 0;
}


