#include<stdio.h> //for printf and scanf
#include<stdlib.h> //for malloc and free


int main()
{
    int iCount=0;
    int *ptr=NULL;
    int iCnt=0;

    printf("Enter number of elemets:\n");
    scanf("%d",&iCount);

    ptr=(int*)malloc(iCount *sizeof(int));

    printf("Enter the elements:\n");
         // 1   //2        //3
    for(iCnt=0;iCnt<iCount;iCnt++)
    {
       scanf("%d",&ptr[iCnt]);  //4
    }

    printf("Your entered elemets are: \n");
        //1      // 2        //3
     for(iCnt=0;iCnt<iCount;iCnt++)
    {
       scanf("%d\t",ptr[iCnt]); //4
    }
     printf("\n");
    return 0;
}
