#include<stdio.h>

int main()
{
    char ch='\0';
    printf("Enter the character: \n");
    scanf("%c",&ch);

    printf("ASCII value of the character int decimal is: %d\n",ch);
    printf("ASCII value of the character  int octal is: %o\n",ch);
    printf("ASCII value of the character in dexadecimal is: %x\n",ch);
    return 0;
}