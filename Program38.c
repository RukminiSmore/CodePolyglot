// printing jay ganesh on screen 5 times
// asking user how many time he wants to print the Hello
#include<Stdio.h>

void Display(int iNo)
{
   int iCnt=0;
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
    printf("*\n");
   }

}

int main()
{
   int iValue =0;
      printf("Enter the number of times you want to display\n");
      scanf("%d",&iValue);
       Display(iValue);
       return 0;
}