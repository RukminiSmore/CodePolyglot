#include<stdio.h>

void DisplayExamTime(int iStandard)
{
    if(iStandard==1)
    {
        printf("Your exam is at 8Am\n");
    }
    else if(iStandard==2)
    {
        printf("Your exam is at 9Am\n");
    }
     else if(iStandard==3)
    {
        printf("Your exam is at 10Am\n");
    }
     else if(iStandard==4)
    {
        printf("Your exam is at 11Am\n");
    }
     else if(iStandard==5)
    {
        printf("Your exam is at 12Am\n");
    }
    else 
    {
        printf("Invalid input\n");
    }
}
int main()
{
    int iClass=0;

    printf("Welcome to school primary application\n");
    printf("Enter your Standard:- \n");
    scanf("%d",&iClass);
    DisplayExamTime(iClass);
    return 0;
}