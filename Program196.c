#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

}NODE, *PNODE,**PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if((*Head==NULL) && (*Tail==NULL))
    {
         *Head=newn;
         *Tail=newn;    //#
    }
    else // LL contains atleast 1 node
    {
        newn->next=*Head;
        *Head=newn;
    }
    (*Tail)->next=*Head;    //#
}

void InsertLast(PPNODE Head,PPNODE Tail,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if((*Head==NULL) && (*Tail==NULL))
    {
         *Head=newn;
         *Tail=newn;
         (*Tail)->next=*Head;
    }
    else // LL contains atleast 1 node
    {
        (*Tail)->next=newn;
        *Tail=newn;  
        (*Tail)->next=*Head;
    }
}

void DeleteFirst(PPNODE Head,PPNODE Tail)
{
    if(*Head==NULL && *Tail==NULL)
    {
         return ;
    }
    else if(*Head==*Tail)
    {
       free(*Head);
       *Head=NULL;
       *Tail=NULL;
    }
    else
    {
        (*Head)=(*Head)->next;
        free((*Tail)->next);
        (*Tail)->next=*Head;
    }
}

void DeleteLast(PPNODE Head,PPNODE Tail)
{
    if(*Head==NULL && *Tail==NULL)
    {
         return ;
    }
    else if(*Head==*Tail)
    {
       free(*Head);
       *Head=NULL;
       *Tail=NULL;
    }
    else
    {
        PNODE temp=*Head;
        while(temp->next!=*Tail)
        {
            temp=temp->next;
        }
        free(*Tail);
        *Tail=temp;
        (*Tail)->next=*Head;      
    }
}




void Display(PNODE Head,PNODE Tail)
{
    printf("Elements of linked list are \n");

    if(Head!=NULL && Tail!=NULL)
    {
        do
        {
            printf("|%d|->",Head->data);
            Head=Head->next;
        } while (Head!=Tail->next);
        printf("Address of first Node\n");
    }
}

int Count(PNODE Head,PNODE Tail)
{
    int iCnt=0;

     if(Head!=NULL && Tail!=NULL)
     {
     do
        {
            iCnt++;
            Head=Head->next;
        } while (Head!=Tail->next);
}
    return iCnt;
}
void InsertAtPos(PPNODE Head,PPNODE Tail,int no, int ipos)
{



}
void DeleteAtPos(PPNODE Head,PPNODE Tail, int ipos)
{

}
int main()
{
    PNODE First=NULL;
    PNODE Last=NULL;            //#
    int iRet=0;
    
    InsertFirst(&First,&Last,51);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11);

    Display(First,Last);
    iRet=Count(First,Last);
    printf("Total linked list are: %d\n",iRet);

    InsertLast(&First,&Last,101);
    InsertLast(&First,&Last,111);
    InsertLast(&First,&Last,121);

    Display(First,Last);
    iRet=Count(First,Last);
    printf("Total linked list are: %d\n",iRet);

    DeleteFirst(&First,&Last);

    Display(First,Last);
    iRet=Count(First,Last);
    printf("Total linked list are: %d\n",iRet);

    DeleteLast(&First,&Last);

    Display(First,Last);
    iRet=Count(First,Last);
    printf("Total linked list are: %d\n",iRet);


    return 0;

}