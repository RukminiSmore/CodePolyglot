#include<stdio.h>

void strUperX(char str[])
{
    
    int iCnt=0;
    while(*str!='\0')
    {
    if(*str>='a' && *str<='z')
    {
        *str=*str-32;
        
    }
    else if( *str>='A' && *str<='Z')
    {
        *str=*str+32;
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
    strUperX(Arr);

    printf("Updated atring is %s\n",Arr);

    return 0;
}