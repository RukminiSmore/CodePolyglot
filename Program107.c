/* output : 
             */

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    for(i=1;i<=iRow;i++)
    {
      for(j=1;j<=iCol;j++)
      {
        if(j==i)
        {
          printf("#\t");

        }
        else
        {
          printf("*\t");
        }
      }
      printf("\n \n");
    }
    

}
int main()
{
  int iNo1=0,iNo2=0;

    printf("enter the number of rows that you want to print :\n");
    scanf("%d",&iNo1);
    printf("enter the number of columns  that you want to print :\n");
    scanf("%d",&iNo2);
   
    Display(iNo1,iNo2);
    return 0;
}
