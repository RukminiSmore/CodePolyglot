#include<stdio.h>

int main()
{
    int iCnt=0;
    printf("_______________________________\n");
    printf("______________ASCII TABLE_______________\n");
    printf("_______________________________\n");
    for(iCnt=0;iCnt<=127;iCnt++)
    {
        printf("%c\t%d\t%o\t%x\n",iCnt,iCnt,iCnt,iCnt);
    }
    printf("_______________________________\n");
    
    return 0;
}