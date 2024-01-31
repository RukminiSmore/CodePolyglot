//improvement of program65

#include<stdio.h>
#include<stdlib.h>

void EvenDisplay(int Arr[],int iSize) //(100,4)
{
    int iCnt=0;
    printf("\n Even Elements of the array are:");

    for(iCnt=0;iCnt<iSize;iCnt++) 
    {
        if(Arr[iCnt]%2==0)
        {
        printf("%d\t",Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
     int  iCount=0,iCnt=0;
     int *ptr=NULL;
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

     EvenDisplay(ptr,iCount); // Display(100,4)

     free(ptr);
     printf("Dynamic memory gets deallocated successfullu...\n");

    return 0;
}