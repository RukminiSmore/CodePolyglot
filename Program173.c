// Insert Last 
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int  data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int No)
{
  PNODE newn=NULL;
  // PNODE newn=(PNODE )malloc (sizeof(NODE));  --- we can write in these way
  newn=(PNODE)malloc(sizeof(NODE));
  newn->data=No;
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
void InsertLast(PPNODE Head,int No)
{
    //Temporary pointer for LL traversal
    PNODE Temp=*Head;
    PNODE newn=NULL;
  // PNODE newn=(PNODE )malloc (sizeof(NODE));  --- we can write in these way
  newn=(PNODE)malloc(sizeof(NODE));
  newn->data=No;
  newn->next=NULL;
  if(*Head==NULL)
  {
    *Head=newn;
  }
  else
  {
    //Travel the address of new node at the end of last node
    while(Temp->next!=NULL)
    {
        Temp=Temp->next;
    }
    //add the address of new node at end of last node
    Temp->next=newn;
  }
}
void Display(PNODE Head)
{
   while(Head!=NULL)
   {
        printf(" |%d |-> ",Head->data);
        Head=Head->next;
   }
   printf("Null \n");
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
void DeleteFirst(PPNODE Head)
{
  PNODE Temp=*Head;
   if(*Head==NULL)
   {
      return ;
   }
   else if((*Head)->next==NULL)
   {
      free(*Head);
      *Head=NULL;
   }
   else
   {
      *Head=(*Head)->next;
      free(Temp);
   }

}
void DeleteLast(PPNODE Head)
{
   PNODE Temp=*Head;
      if(*Head==NULL)
   {
      return ;
   }
   else if((*Head)->next==NULL)
   {
      free(*Head);
      *Head=NULL;
   }
   else
   {
     while(Temp->next->next!=NULL)
     {
      Temp=Temp->next;
     } 
     free(Temp->next);
     Temp->next=NULL;
   }
}
int main()
{
    PNODE First=NULL;
    int iRet=0;
    InsertFirst(&First,111);
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    Display(First);
    iRet=Count(First);
     printf("number of nodes present in linked list are  %d :\n",iRet);
    
     InsertLast(&First,121);
     InsertLast(&First,151);

     Display(First);
     iRet=Count(First);
     printf("number of nodes present in linked list are  %d :\n",iRet);
   
     printf("\n \n");

     DeleteFirst(&First);
     Display(First);
     iRet=Count(First);
     printf("number of nodes present in linked list are  %d :\n",iRet);
     
     printf("\n \n");
     
     DeleteLast(&First);
     Display(First);
     iRet=Count(First);
     printf("number of nodes present in linked list are  %d :\n",iRet);
    return 0;

}