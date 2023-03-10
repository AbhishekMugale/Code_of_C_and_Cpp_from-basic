#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
{
   int data;
   struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertLast(PPNODE First,int no)
{
   PNODE newn = (PNODE)malloc(sizeof(NODE));  // 1 .Allocate Memory
   PNODE temp = *First;
   newn -> data = no;
   newn -> next = NULL;
   
   if(*First == NULL)  // If Linked List is empty
   {
      *First = newn;
   }
   else     // If Linked List contains atleast one node
   {
      while(temp->next!=NULL)
      {
         temp = temp -> next;
      }
      temp->next = newn;
   }
     
}
void DisplayR(PNODE First)
{
  
  if(First != NULL )
  {
     printf("| %d |-> ",First->data);
     First = First -> next;
     DisplayR(First);
  }
  
}

void DisplayR1(PNODE First)
{
  
  if(First != NULL )
  {
     printf("| %d |-> ",First->data);
     
     DisplayR1(First->next);
  }
  
}

int CountR(PNODE First)
{
  static int iCnt = 0;
  if(First != NULL )
  {
     iCnt++;
     First = First -> next;
     CountR(First);
  }
  return iCnt;

}

int main()
{
  // struct node *Head =NULL;
   PNODE Head = NULL;
   int iRet = 0;
   
   
   InsertLast(&Head,11);
   InsertLast(&Head,12);
   InsertLast(&Head,51);
   InsertLast(&Head,101);
   
   DisplayR1(Head);
   iRet = CountR(Head);
   printf("\nNumber of Nodes are : %d\n",iRet);
   
   
   return 0;
}

