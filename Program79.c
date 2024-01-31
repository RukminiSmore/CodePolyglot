//take input n from user and print the addition of all numbers

#include<stdio.h>
#include<stdlib.h>

void MaxMin(int Arr[],int iSize)
{
    int iCnt=0;
    int iMax=Arr[0];
    int iMin=Arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax)
       {
        iMax=Arr[iCnt];
       }
       if(Arr[iCnt]<iMin)
       {
        iMin=Arr[iCnt];
       }
    }
    printf("Maximum element is :%d\n",iMax);
    printf("minimum element is: %d \n",iMin);
}

int main()
{
    int iCount=0;
    int iCnt=0;
    int *ptr=NULL;
    
    printf("Enter number of elements that you want to enter :\n");
    scanf("%d",&iCount);

    ptr=(int *)malloc(iCount *sizeof(int));
    printf("Dynamic memeory gets allocated successfully..\n");

    printf("Enter the elements :\n");
    for(iCnt=0; iCnt<iCount;iCnt++)
    {
        printf("\nEnter the element no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    MaxMin(ptr,iCount);
    
    free(ptr);
    printf("Dynamic memeory gets deallocated suceessfully...\n");

    return 0;
}


