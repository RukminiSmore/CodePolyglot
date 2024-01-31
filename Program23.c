//My code
#include<stdio.h>

int Average(int iNo1, int iNo2,int iNo3)
{
    int iAvg=0;
    iAvg=((iNo1+iNo2+iNo3)/3);
    return iAvg;
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iValue3=0;
    int iRet=0;

    printf("Enter first number\n");
    scanf("%d",&iValue1);

     printf("Enter second number\n");
    scanf("%d",&iValue2);

    printf("Enter third number\n");
    scanf("%d",&iValue3);


    iRet=Average(iValue1,iValue2,iValue3);

    printf("average of three number is : %d\n",iRet);

    return 0;
}