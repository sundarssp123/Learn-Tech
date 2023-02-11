
//Title:Control Statements-Nested if   Author:Sundar Ssp       Date:09-02-2023

#include<stdio.h>

int mark;

int main()
{
    printf("Control Statements:Nested IF\n\n");                            
    printf("Enter the student mark:");                                            
    scanf("%d",&mark);                                                       //Get the input from user

    if(mark>=50)
    {
        printf("Congratulations, you are passed in the Exam\n");
        if(mark>=50&&mark<=56)
        {
            printf("You got E grade\n");
        }
        else if(mark>=57&&mark<=60)
        {
            printf("You got D grade\n");
        }
        else if(mark>=61&&mark<=70)
        {
            printf("You got C grade\n");
        }
        else if(mark>=71&&mark<=80)
        {
            printf("You got B grade\n");
        }
        else if(mark>=81&&mark<=90)
        {
            printf("You got A grade\n");
        }
        else if(mark>=91&&mark<=100)
        {
            printf("You got S grade\n");
        }
        else
        {
            printf("Apsara pencil extra mark for good hand writing \n");
        }
        
    }
    else
    {
        printf("Sorry!, You are failed in the exam\n");
    }
    return 0;
}


