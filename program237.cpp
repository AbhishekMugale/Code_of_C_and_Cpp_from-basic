#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
   int data;
   struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
//typedef struct node ** PPNODE;

class SinglyCL
{
   public: 
       PNODE First;
       PNODE Last;
       
       SinglyCL();
       void InsertFirst(int no);
       void InsertLast(int no);
       void InsertAtPosition(int no,int ipos);
       
       void DeleteFirst();
       void DeleteLast();
       void DeleteAtPosition(int ipos);
       
       void Display();
       int Count();
};

SinglyCL :: SinglyCL()
{
   First = NULL;
   Last  = NULL;
}

void SinglyCL :: InsertFirst(int no)
{  
   //PNODE newn = (PNODE)malloc(sizeof(NODE));
   PNODE newn = new NODE;
   
   newn->data = no;
   newn->next = NULL;
   
   if((First==NULL) && (Last==NULL)) //Empty  LL
   {
      First = Last = newn;
      (Last)->next = First;
   }
   else  //LL contains at least one node
   {
      newn->next = First;
      First = newn;
      (Last)->next = First;
   }
 
}
void SinglyCL ::  DeleteFirst()
{
    PNODE temp = First;
    if((First == NULL) && (Last == NULL))   // Empty LL
    {
        return;
    }
    else if(First == Last) // LL contains single node
    {
        //free(*First);  
         delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
       First = (First)->next;
       //free(temp);
       delete temp; 
       (Last)->next = First;
    }
}
void SinglyCL :: DeleteLast()
{
    PNODE temp = First;
    if((First == NULL) && (Last == NULL))   // Empty LL
    {
        return;
    }
    else if(First == Last) // LL contains single node
    {
        //free(*First);
        delete First;  
        First = NULL;
        Last = NULL;
    }
    else
    {
         while(temp->next != (Last))
         {
            temp = temp->next;
         }
         free(temp->next);    //free(*Last)
         Last = temp;
         (Last)->next = First;         
    }
}

void SinglyCL ::  InsertLast(int no)
{  
   //PNODE newn = (PNODE)malloc(sizeof(NODE));
   PNODE newn = new NODE;
   
   newn->data = no;
   newn->next = NULL;
   
   if((First==NULL) && (Last==NULL)) //Empty  LL
   {
      First = Last = newn;
      (Last)->next = First;
   }
   else  //LL contains at least one node
   {
       (Last)->next = newn;
       Last = newn;
       (Last)->next = First;
   }
    
}
void SinglyCL ::  Display()
{
   cout<<"Elements of Linked list are : "<<"\n";
   PNODE temp = First;
   do
   {
      cout<<"| "<<temp->data<<" |->";
      temp = temp->next;
      
   }while(temp != Last->next);
   cout<<"\n";

}

int SinglyCL ::  Count()
{
  int iCnt = 0;
  PNODE temp = First;
  do
  {
    iCnt++;
    temp = temp->next;
  }while(temp != Last->next);

  return iCnt;
}

void SinglyCL ::  InsertAtPosition(int no,int ipos)
{
   int iNodeCnt = 0,iCnt = 0;
   PNODE newn = NULL;
   PNODE temp = First;
   iNodeCnt = Count();
   
   
   if((ipos < 1) || (ipos > iNodeCnt + 1))
   {
      cout<<"Invalid position"<<"\n";
      return;
   }
   if(ipos == 1)
   {
      InsertFirst(no);
   }
   else if(ipos == iNodeCnt+1)
   {
      InsertLast(no);
   }
   else
   {
     // newn = (PNODE)malloc(sizeof(NODE));
       newn = new NODE;
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
void SinglyCL ::  DeleteAtPosition(int ipos)
{
   int iNodeCnt = 0,iCnt = 0;
   iNodeCnt = Count();
   PNODE temp1 = First;
   PNODE temp2 = NULL;
   if((ipos < 1) || (ipos > iNodeCnt))
   {
      cout<<"Invalid position"<<"\n";
      return;
   }
   if(ipos == 1)
   {
      DeleteFirst();
   }
   else if(ipos == iNodeCnt)
   {
      DeleteLast();
   }
   else
   {
      for(iCnt=1; iCnt < ipos-1;iCnt++)
      {
         temp1 = temp1->next;
      }
      temp2 = temp1->next;
      
      temp1->next=temp2->next;
      //free(temp2);
      delete temp2;
   }

}

int main()
{
  SinglyCL obj;
  
  int iRet = 0;
  
  obj.InsertFirst(11);
  obj.InsertFirst(21);
  obj.InsertFirst(51);
  
  obj.InsertFirst(91);
  obj.InsertFirst(71);
  obj.InsertFirst(101);
  
  obj.InsertAtPosition(105,5);
  
  obj.Display();
 
  iRet = obj.Count();
  cout<<"The total nodes in circular linked List are : "<<iRet<<"\n";
 
  obj.DeleteAtPosition(5);
 
  obj.Display();
 
  iRet = obj.Count();
  cout<<"The total nodes in circular linked List are: "<<iRet<<"\n";  
 
  obj.DeleteFirst();
  obj.Display();
 
  iRet = obj.Count();
  cout<<"The total nodes in circular linked List are : "<<iRet<<"\n";
  
  obj.DeleteLast();
  obj.Display();
 
  iRet = obj.Count();
  cout<<"The total nodes in circular linked List are : "<<iRet<<"\n";
  return 0;
}
