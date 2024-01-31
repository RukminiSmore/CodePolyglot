#include<stdio.h>

void Display(int iNo)
{
   int iDigit=0;
   while(iNo>0)
   {
   // printf("_______________________\n");
    iDigit=iNo%10;
    printf("digit is: %d\n",iDigit);
    iNo=iNo/10;
    printf("Number is: %d\n",iNo);
   }
}

int main()
{
    int iValue=0;


   printf("Enter number\n");
   scanf("%d",&iValue);
    Display(iValue);

    
    return 0;
}