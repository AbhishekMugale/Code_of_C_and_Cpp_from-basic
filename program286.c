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

void InsertFirst(PPNODE First,int no)
{
   PNODE newn = (PNODE)malloc(sizeof(NODE));  // 1 .Allocate Memory
   
   newn -> data = no;
   newn -> next = NULL;
   
   if(*First == NULL)  // If Linked List is empty
   {
      *First = newn;
   }
   else     // If Linked List contains atleast one node
   {
      newn->next = *First;
      *First = newn;
   }
   
}
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
void Display(PNODE First)
{
  printf("Elements from the Linked List are : \n");
  while(First != NULL )
  {
     printf("| %d |-> ",First->data);
     First = First -> next;
  }
  printf("NULL\n");

}
int Count(PNODE First)
{
  int iCnt = 0;
  while(First != NULL )
  {
     iCnt++;
     First = First -> next;
  }
  return iCnt;

}
void DeleteFirst(PPNODE First)
{
  PNODE temp = *First;
  if(*First == NULL) //A  // Empty LL
  {
     return;
  }
  else if((*First)->next == NULL) // B   // 1 node in LL
  {
    free(*First);
    *First = NULL;
  }
  else  // C   //  More than 1 node in LL
  {
     (*First) = (*First) -> next; 
     free(temp);   
  }
}
void DeleteLast(PPNODE First)
{
  PNODE temp = *First;
  if(*First == NULL)  // Empty LL
  {
     return;
  }
  else if((*First)->next == NULL)  // 1 node in LL
  {
    free(*First);
    *First = NULL;
  }
  else     //  More than 1 node in LL
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
      
      temp = *First;
      for(iCnt = 1;iCnt<ipos-1;iCnt++)
      {
         temp=temp->next;
      }
      newn->next = temp->next;
      temp->next = newn;
       
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
       free(temp2);
   }
   

}
int main()
{
  // struct node *Head =NULL;
   PNODE Head = NULL;
   
   int iChoice = 0,iPos = 0,iRet = 0,iNo = 0;
   
   printf("Welcome to Data Structure Application written by Abhishek Mugale \n");
   while(1)
   {
       printf("-----------------------------------\n");

       printf("Please Select the desired option : \n");
       printf("1 : Insert New Node at First Position\n");
       printf("2 : Insert New Node at Last Position\n");
       printf("3 : Insert New Node at Given Position\n");
       printf("4 : Delete New Node at First Position\n");
       printf("5 : Delete New Node at Last Position\n");
       printf("6 : Delete New Node at Given Position\n");
       printf("7 : Display the contents of Linked List\n");
       printf("8 : Count numnber of nodes from Linked List\n");
       printf("9 : To End the Application\n");
       
       scanf("%d",&iChoice);
       
       switch(iChoice)
       {
          case 1:
              printf("Enter the data that u want to insert : \n");
              scanf("%d",&iNo);
              
              InsertFirst(&Head,iNo);
              break;
          
          case 2:
              printf("Enter the data that u want to insert : \n");
              scanf("%d",&iNo);
              
              InsertLast(&Head,iNo);
              break;
          
          case 3:
              printf("Enter the data that u want to insert : \n");
              scanf("%d",&iNo);
              printf("Enter the position : \n");
              scanf("%d",&iPos);
              
              InsertAtPos(&Head,iNo,iPos); 
              break;
          
          case 4:
              DeleteFirst(&Head);
              break;
              
          case 5:
              DeleteLast(&Head);
              break;
          
          case 6:              
              printf("Enter the position for deleteion of that data : \n");
              scanf("%d",&iPos);
              
              DeleteAtPos(&Head,iPos); 
              break;
          
          case 7:
              Display(Head);
              
              break;
          
          case 8:
              iRet = Count(Head);
              printf("Total number of nodes in linked list are : %d\n",iRet);
              break;
          
          case 9:
              printf("Thank u for using the application\n");
              return 0;
              
          default : 
          		printf("Please Enter Valid Option\n");
          		break;
       }
       printf("-----------------------------------\n");
   }
   return 0;
}

