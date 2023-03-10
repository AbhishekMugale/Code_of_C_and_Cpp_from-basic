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

void DisplayDigitSum(PNODE First)
{
   int iSum =0,iDigit = 0;
   
     while(First!=NULL)
    {   
       printf("Addition of Digit of the number %d is",First->data);
       
       while(First->data!=0)
      {
       iDigit = First->data%10;
       iSum = iSum + iDigit;
       First->data = First->data/10;
      }
        printf( " %d \n " , iSum);
        First = First->next;
        iSum = 0;
    }
   
}

int main()
{
  // struct node *Head =NULL;
   PNODE Head = NULL;
   
   InsertLast(&Head,11);
   InsertLast(&Head,21);
   InsertLast(&Head,51);
   InsertLast(&Head,101);
   InsertLast(&Head,111);
   InsertLast(&Head,121);
   
   Display(Head);
   
   DisplayDigitSum(Head);
   
   
   
   return 0;
}

