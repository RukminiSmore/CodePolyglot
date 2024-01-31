/* ****
   ****
   ****  
   iRow=3
   iCol=4
   output : 1 2 3 4
             1 2 3 4
             1 2 3 4*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    for(i=1;i<=iRow;i++)
    {
      for(j=1;j<=iCol;j++)
      {
        printf("%d\t",j);
      }
      printf("\n");
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
