//Title:Find the AVG and total mark Author:Sundar Ssp       Date:23-02-2023

#include<stdio.h>

int total=0,i,mark[5];
float avg;

int main()
{
    printf("Enter your 5 subjects marks:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&mark[i]);
        total=total+mark[i];
    }

    avg=total/5;
    printf("The Total Mark is:%d\n",total);
    printf("The Average Mark is:%f\n",avg);

    return 0;
}




