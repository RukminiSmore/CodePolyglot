#include<stdio.h>
#include<stdbool.h>
int CountCapital(char str[])
{
    int iCnt=0;
    while(*str!='\0')
    {
    if((*str>='A') && (*str<='Z'))
    {
        iCnt++;
    }
    str++;
    }
    return iCnt; 
}
int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter the character : \n");
    scanf("%[^'\n']s",&Arr);
    iRet=CountCapital(Arr);

    printf("Frequency of capital is %d\n",iRet);


    return 0;
}