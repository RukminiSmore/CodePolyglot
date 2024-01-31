#include<stdio.h>

void Display(int iNo)
{
   int iDigit=0;
    printf("value of iNo is: %d\n",iNo); //721
    printf("____________________________________\n");
   iDigit=iNo%10;
   printf("Digit is : %d\n",iDigit); //1
   iNo=iNo/10; //72
   printf("value of iNo is: %d\n",iNo); //72
   printf("____________________________________\n");
   iDigit=iNo%10;
   printf("Digit is : %d\n",iDigit); //2
   iNo=iNo/10; //7
   printf("value of iNo is: %d\n",iNo);  //7
   printf("____________________________________\n");
   iDigit=iNo%10;
   printf("Digit is : %d\n",iDigit); // 7
   iNo=iNo/10; //0
   printf("value of iNo is: %d\n",iNo); //0
   printf("____________________________________\n");
}

int main()
{
    int iValue=721;


   // printf("Enter number\n");
   // scanf("%d",&iValue);
    Display(iValue);

    
    return 0;
}