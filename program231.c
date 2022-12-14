#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
{
   int data;
   struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,PPNODE Last,int no)
{  
   PNODE newn = (PNODE)malloc(sizeof(NODE));
   
   newn->data = no;
   newn->next = NULL;
   
   if((*First==NULL) && (*Last==NULL)) //Empty  LL
   {
      *First = *Last = newn;
      (*Last)->next = *First;
   }
   else  //LL contains at least one node
   {
      newn->next = *First;
      *First = newn;
      (*Last)->next = *First;
   }
 
}
void DeleteFirst(PPNODE First,PPNODE Last)
{
    PNODE temp = *First;
    if((*First == NULL) && (*Last == NULL))   // Empty LL
    {
        return;
    }
    else if(*First == *Last) // LL contains single node
    {
        free(*First);  
        *First = NULL;
        *Last = NULL;
    }
    else
    {
       *First = (*First)->next;
       free(temp);
       (*Last)->next = *First;
    }
}
void DeleteLast(PPNODE First,PPNODE Last)
{
    PNODE temp = *First;
    if((*First == NULL) && (*Last == NULL))   // Empty LL
    {
        return;
    }
    else if(*First == *Last) // LL contains single node
    {
        free(*First);  
        *First = NULL;
        *Last = NULL;
    }
    else
    {
         while(temp->next != (*Last))
         {
            temp = temp->next;
         }
         free(temp->next);    //free(*Last)
         *Last = temp;
         (*Last)->next = *First;         
    }
}

void InsertLast(PPNODE First,PPNODE Last,int no)
{  
   PNODE newn = (PNODE)malloc(sizeof(NODE));
   
   newn->data = no;
   newn->next = NULL;
   
   if((*First==NULL) && (*Last==NULL)) //Empty  LL
   {
      *First = *Last = newn;
      (*Last)->next = *First;
   }
   else  //LL contains at least one node
   {
       (*Last)->next = newn;
       *Last = newn;
       (*Last)->next = *First;
   }
    
}
void Display(PNODE First,PNODE Last)
{
   printf("Elements of Linked list are : \n");
   
   do
   {
      printf("| %d |->",First->data);
      First = First->next;
      
   }while(First != Last->next);
   printf("\n");

}

int Count(PNODE First,PNODE Last)
{
  int iCnt = 0;
  do
  {
    iCnt++;
    First = First->next;
  }while(First != Last->next);

  return iCnt;
}

void InsertAtPosition(PPNODE First,PPNODE Last,int no,int ipos)
{
   int iNodeCnt = 0,iCnt = 0;
   PNODE newn = NULL;
   PNODE temp = *First;
   iNodeCnt = Count(*First,*Last);
   
   
   if((ipos < 1) || (ipos > iNodeCnt + 1))
   {
      printf("Invalid position");
      return;
   }
   if(ipos == 1)
   {
      InsertFirst(First,Last,no);
   }
   else if(ipos == iNodeCnt+1)
   {
      InsertLast(First,Last,no);
   }
   else
   {
      newn = (PNODE)malloc(sizeof(NODE));
   
      newn->data = no;
      newn->next = NULL;  
      
      for(iCnt = 1;iCnt<ipos-1;iCnt++)
      {
        temp = temp->next;
      } 
      newn ->next = temp->next;
      temp->next = newn;
   }

}
void DeleteAtPosition(PPNODE First,PPNODE Last,int ipos)
{
   int iNodeCnt = 0,iCnt = 0;
   iNodeCnt = Count(*First,*Last);
   PNODE temp1 = *First;
   PNODE temp2 = NULL;
   if((ipos < 1) || (ipos > iNodeCnt))
   {
      printf("Invalid position");
      return;
   }
   if(ipos == 1)
   {
      DeleteFirst(First,Last);
   }
   else if(ipos == iNodeCnt)
   {
      DeleteLast(First,Last);
   }
   else
   {
      for(iCnt=1; iCnt < ipos-1;iCnt++)
      {
         temp1 = temp1->next;
      }
      temp2 = temp1->next;
      
      temp1->next=temp2->next;
      free(temp2);
      
   }

}

int main()
{
  PNODE Head = NULL;
  PNODE Tail = NULL;
  int iRet = 0;
  
  InsertFirst(&Head,&Tail,11);
  InsertFirst(&Head,&Tail,21);
  InsertFirst(&Head,&Tail,51);
  
  InsertFirst(&Head,&Tail,91);
  InsertFirst(&Head,&Tail,71);
  InsertFirst(&Head,&Tail,101);
  
  InsertAtPosition(&Head,&Tail,105,5);
  
  Display(Head,Tail);
 
  iRet = Count(Head,Tail);
  printf("The total nodes in circular linked List are : %d\n",iRet);
 
  DeleteAtPosition(&Head,&Tail,5);
 
  Display(Head,Tail);
 
  iRet = Count(Head,Tail);
  printf("The total nodes in circular linked List are : %d\n",iRet);  
 
  DeleteFirst(&Head,&Tail);
  Display(Head,Tail);
 
  iRet = Count(Head,Tail);
  printf("The total nodes in circular linked List are : %d\n",iRet);
  
  DeleteLast(&Head,&Tail);
  Display(Head,Tail);
 
  iRet = Count(Head,Tail);
  printf("The total nodes in circular linked List are : %d\n",iRet);
  return 0;
}
