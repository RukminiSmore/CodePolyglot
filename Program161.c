#include<stdio.h>
#include<stdlib.h>

//structure declaration 
struct node
{
    int data;              //4 bytes 
    struct node*next;       // 8 bytes  //SELF REFERENSIAL POINTER
};
int main()
{
    struct node *First=NULL;

   return 0;
}