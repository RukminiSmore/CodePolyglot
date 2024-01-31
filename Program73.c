//take input n from user and print the addition of all numbers

#include<stdio.h>
#include<stdlib.h>

int EvenAddition(int Arr[],int iSize) 
{
    int iCnt=0;
    int iSum=0;


    for(iCnt=0;iCnt<iSize;iCnt++) 
    {
        if((Arr[iCnt]%2)==0)
        {
        iSum=iSum+Arr[iCnt];
        }
    }
    return iSum;
}

int main()
{
     int  iCount=0,iCnt=0;
     int *ptr=NULL;
     int iRet=0;

     printf("enter number of elements that you want to enter: \n");
     scanf("%d",&iCount);

     ptr=(int *)malloc(iCount*sizeof(int));
     printf("Dynamic memory gets allocated successfully for %d elements\n",iCount);
     
     printf("enter the %d values:\n");
     
     for(iCnt=0;iCnt<iCount;iCnt++) //o(n)
     {
        printf("\n Enter the elemts no %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
     }

     iRet=EvenAddition(ptr,iCount); // Display(100,4)

     printf("total addition is :%d\n",iRet);

     free(ptr);
     printf("Dynamic memory gets deallocated successfullu...\n");

    return 0;
}

