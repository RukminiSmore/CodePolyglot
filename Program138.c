#include<stdio.h>
#include<stdbool.h>
void ReplaceVowel(char str[])
{
    
    int iCnt=0;
    while(*str!='\0')
    {
    if(*str=='a'|| *str=='e'||*str=='i' ||*str=='o'||*str=='u' || *str=='A'|| *str=='E'||*str=='I' ||*str=='O'||*str=='U')
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
    ReplaceVowel(Arr);

    printf("Updated atring is %s\n",Arr);

    return 0;
}