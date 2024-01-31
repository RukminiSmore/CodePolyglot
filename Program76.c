//take input n from user and print the addition of all numbers

#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iSize) 
{
     int iCnt=0, iSum=0;
     float fAverage=0.0f;
     for(iCnt=0;iCnt<iSize;iCnt++)
     {
        iSum=iSum+Arr[iCnt];
     }
     fAverage=((float)iSum/(float)iSize);
     return fAverage;
}

int main()
{
    int iCount=0;
    int iCnt=0;
    int *ptr=NULL;
    float fRet=0;
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

    fRet=Average(ptr,iCount);
    printf("Average is: %f\n",fRet);
    free(ptr);
    printf("Dynamic memeory gets deallocated suceessfully...\n");

    return 0;
}


