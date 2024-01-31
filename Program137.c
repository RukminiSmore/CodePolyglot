#include<stdio.h>
#include<stdbool.h>
void Replace(char str[])
{
    int iCnt=0;
    while(*str!='\0')
    {
    if(*str =='a')
    {
        *str='_';
    }
    str++;
    } 
}
int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter the character : \n");
    scanf("%[^'\n']s",&Arr);
    Replace(Arr);

    printf("Updated atring is %s\n",Arr);

    return 0;
}