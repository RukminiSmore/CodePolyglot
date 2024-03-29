//Practice
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->next=*Head;
        *Head=newn;

    }
}
void Display(PNODE Head)
{
    printf("number of  linked list are: ");
    while(Head!=NULL)
    {
        printf(" | %d | -> ",Head->data);
        Head=Head->next;
    }
    printf("Null\n");
}
int Count(PNODE Head)
{
    int iCnt=0;
    while(Head!=NULL)
    {
        iCnt++;
        Head=Head->next;
    }
    return iCnt;
}
int main()
{
    PNODE First =NULL;
    int iRet=0;
    InsertFirst(&First,11);
    InsertFirst(&First,21);
    InsertFirst(&First,51);
    InsertFirst(&First,101);
    InsertFirst(&First,151);
    iRet=Count(First);
    Display(First);

    printf("Number of nodes in linked list are : \n",iRet);


    return 0;
}