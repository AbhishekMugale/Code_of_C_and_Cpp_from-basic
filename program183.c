#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
   int data;
   struct node * next;
   struct node * prev;    //  x
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertFirst(PPNODE First,int no)
{
   PNODE newn = (PNODE)malloc(sizeof(NODE));
   
   newn->data = no;
   newn->next = NULL;
   newn->prev = NULL;    //x
   
   if(*First == NULL)
   {
   	  *First = newn;
   }
   else
   {
      newn->next = *First;
      (*First)->prev = newn;   //  x
      *First = newn;   
   }
}
void InsertLast(PPNODE First,int no)
{
   PNODE newn = (PNODE)malloc(sizeof(NODE));
   PNODE temp = *First;  
   newn->data = no;
   newn->next = NULL;
   newn->prev = NULL;    //x
   
   if(*First == NULL)
   {
   	  *First = newn;
   }
   else
   {
      while(temp->next!=NULL)
      {
         temp=temp->next;
      }
      temp->next = newn;
      newn->prev = temp;    // x
   }
}
void Display(PNODE First)
{
   printf("Elements of Linked list are \n");
   printf("NULL<=>");
   while(First!=NULL)
   {
     printf("| %d |<=> ",First->data);
     First = First -> next;
   }
   printf("NULL\n");
}
int Count(PNODE First)
{
   int iCnt = 0;
   while(First!=NULL)
   {
     iCnt++;
     First = First -> next;
   }
   return iCnt;
}
void DeleteFirst(PPNODE First)
{
   if(*First==NULL)  //LL is Empty
   {
      return;
   } 
   else if((*First)->next==NULL)  // LL contains 1 node
   {
      free(*First);
      *First = NULL;
   }
   else
   {
      *First = (*First)->next;
      free((*First)->prev);
      (*First)->prev = NULL;   //x
   }
}
void DeleteLast(PPNODE First)
{
   PNODE temp = *First; 
   if(*First==NULL)  //LL is Empty
   {
      return;
   } 
   else if((*First)->next==NULL)  // LL contains 1 node
   {
      free(*First);
      *First = NULL;
   }
   else
   {
     while(temp->next->next != NULL)
     {
        temp=temp->next;
     }
     free(temp->next);
     temp->next = NULL;
   }
}
void InsertAtPos(PPNODE First,int no,int ipos)
{
   int NodeCnt = 0;
   PNODE newn = NULL;
   PNODE temp = NULL;
   int iCnt = 0;
   NodeCnt = Count(*First);
   
   if((ipos < 1) || (ipos > (NodeCnt+1)))
   {
       printf("Invalid Postion");
       return;
   }
   if(ipos==1)
   {
     InsertFirst(First,no);
   }
   else if(ipos==NodeCnt+1)
   {
     InsertLast(First,no);
   }
   else
   {
      newn = (PNODE)malloc(sizeof(NODE));
      
      newn->data = no;
      newn->next = NULL;
      newn->prev = NULL;   // x
      
      temp = *First;
      
      for(iCnt = 1;iCnt<ipos-1;iCnt++)
      {
         temp=temp->next;
      }
      newn->next = temp->next;
      temp->next->prev = newn;     //x
      
      temp->next = newn;
      newn->prev = temp;            //x
   }

}

void DeleteAtPos(PPNODE First,int ipos)
{
   PNODE temp1 = NULL;
   PNODE temp2 = NULL;
   int iCnt = 0,NodeCnt = 0;
   
   NodeCnt=Count(*First);
   
   if((ipos < 1) || (ipos>NodeCnt))
   {
      printf("Invalid Position");
      return;
   }
   if(ipos==1)
   {
     DeleteFirst(First);
   }
   else if(ipos==NodeCnt)
   {
     DeleteFirst(First);
   }
   else
   {   
       temp1 = *First;
       for(iCnt = 1;iCnt<ipos-1;iCnt++)
       {
         temp1 = temp1->next;
       }
       temp2=temp1->next;
       
       temp1->next=temp2->next;//  temp1->next = temp1->next->next;
       temp2->next->prev=temp1;  // x
       free(temp2);
   }
   

}


int main()
{
   PNODE Head = NULL;
   int iRet = 0;
   
   Display(Head);
   InsertFirst(&Head,51);
   Display(Head);
   InsertFirst(&Head,21);
   Display(Head);
   InsertFirst(&Head,11);
   Display(Head);
   
   InsertLast(&Head,101);
   Display(Head);
   InsertLast(&Head,111);
   Display(Head);
   InsertLast(&Head,121);
   
   Display(Head);
   iRet = Count(Head);
   
   printf("Number of elements are : %d\n",iRet);  
   
   InsertAtPos(&Head,105,5);
   InsertAtPos(&Head,107,6);
   InsertAtPos(&Head,109,4);
   Display(Head);
   printf("Hii\n");
   DeleteAtPos(&Head,5);
   Display(Head);
   printf("Hii\n");
   DeleteFirst(&Head);
   Display(Head);
     
   DeleteLast(&Head);
   Display(Head);
   
   iRet = Count(Head);
   printf("Number of elements are : %d\n",iRet);  
   
  
  return 0;
}
