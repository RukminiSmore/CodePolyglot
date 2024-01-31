//take input n from user and print the addition of all numbers

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
    int iCnt=0;
    int iMax=Arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       if(Arr[iCnt]>iMax)
       {
        iMax=Arr[iCnt];
       }
    }
    return iMax;
}

int main()
{
    int iCount=0;
    int iCnt=0;
    int *ptr=NULL;
    int iRet=0;
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

    iRet=Maximum(ptr,iCount);
    printf("Largest Numbere is: %d\n",iRet);
    free(ptr);
    printf("Dynamic memeory gets deallocated suceessfully...\n");

    return 0;
}


