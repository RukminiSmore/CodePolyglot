#include<stdio.h>

float CalculateFunction(int iMarks, int iTotal) // you can also use the float data type here,like (float iMarks, float iTotal) 
{
    float fPercentage =0.0f;

    if(iMarks>iTotal) //filter
    {
        printf("Invalid input\n");
        return fPercentage;
    }
    if((iMarks<0) || (iTotal<0)) //filter
    {
        printf("invalid input\n");
        return fPercentage;
    }
    fPercentage=(((float)iMarks/(float)iTotal)*100); // here we use typecasting 
    return fPercentage;
}
int main()
{
    auto int iValue1=0;
    auto int iValue2=0;
    auto float fRet=0;

    printf("Enter your marks\n");
    scanf("%d",&iValue1);

    printf("enter the total marks \n");
    scanf("%d",&iValue2);

    fRet=CalculateFunction(iValue1, iValue2);

    printf("your percentage is :%f\n",fRet);

    return 0;
}