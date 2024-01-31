// without typedef

#include<stdio.h>
#include<stdlib.h>

//structure declaration 
struct node
{
    int data;              //4 bytes 
    struct node*next;       // 8 bytes  //SELF REFERENSIAL POINTER
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;

void InsertFirst(struct node ** Head,int No)
{
    struct node * newn=NULL;
    newn=(struct node *)malloc(sizeof(struct node));

    newn->data=No;
    newn->next=NULL;
}
int main()
{
    struct node * First=NULL;
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

   return 0;
}

