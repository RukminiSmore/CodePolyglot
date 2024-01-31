#include<stdio.h>

void DisplayExamTime(int iStandard)
{
    switch (iStandard)
    {
    case 1:
        printf("your exam is at 8Am\n");
        break;
     case 2:
       printf("Your exam is at 9Am\n");
       break;
    case 3:
       printf("Your exam is at 10Am\n");
       break;
    case 4:
       printf("Your exam is at 11Am\n");
       break;

    case 5:
       printf("Your exam is at 12Am\n");
       break;         

    default:
    printf("Invalid input\n");
    break;
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