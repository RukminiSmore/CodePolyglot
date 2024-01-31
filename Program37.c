// printing jay ganesh on screen 5 times
// asking user how many time he wants to print the Hello
#include<Stdio.h>

void Display(int iNo)
{
   int iCnt=0;
   for(iCnt=iNo;iCnt>=1;iCnt--)
   {
    printf("%d\n",iCnt);
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