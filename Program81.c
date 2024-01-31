//take input n from user and print the addition of all numbers

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize,int iNo)
{
    int iCnt=0;
    int iFrequency =0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iFrequency++;
        }
        
    }
    return iFrequency;
}

int main()
{
    int iCount=0,iRet=0;
    int iCnt=0;
    int iValue=0;
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

    printf("Enter the element which you want to search :\n");
    scanf("%d",&iValue);

    iRet=Frequency(ptr,iCount,iValue);

    printf("%d ocuures %d times\n",iRet);
    
    free(ptr);
    printf("Dynamic memeory gets deallocated suceessfully...\n");

    return 0;
}


