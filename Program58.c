#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
   int iTemp=iNo; //Xerox kadhli
    int iDigit =0;
    int iRev=0;
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        iRev=(iRev*10)+iDigit;
    }
    if(iTemp==iRev)
    {
        return true;
    }
    else
    {
        return false;
    }

    
}

int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter number\n");
    scanf("%d",&iValue);
    bRet=CheckPallindrome(iValue);
     if(bRet==true)
     {
        printf("Given number %d is pallindrome\n",iValue);

     }
     else
     {
          printf("Given number %d is not pallindrome\n",iValue);
     }
   return 0; 
}