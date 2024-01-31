

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=1; iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0) 
        {
           iSum=iSum+iCnt;

        }
        }   
        if(iSum==iNo)
        {
            return true;
        }
        else
        {
            return false;
        } 
    return iSum;
}
int main()
{

    int iValue=0;
    bool bRet=false;
    printf("Enter the number: \n");
    scanf("%d",&iValue);

    bRet=CheckPerfect(iValue);

    if(bRet==true)
    {
        printf("number is perfect number\n");
    }
    else
    {
        printf("Number is not perfect number\n");
    }



    return 0;

}
//Time complexity : O(N/2)