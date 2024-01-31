#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node*next;
  struct node *prev;
  
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
   PNODE newn=NULL;
   newn=(PNODE)malloc(sizeof(NODE));
   newn->data=NULL;
   newn->prev=NULL;
   newn->next=NULL;

   if(*Head==NULL)
   {
     *Head=newn;
   }
   else
   {

   }

}
int main()
{


    return 0;
}