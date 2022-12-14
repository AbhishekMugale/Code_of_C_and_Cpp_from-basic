#include<iostream>
using namespace std;

struct node
{
   int data;
   struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyLL
{
   public:
      PNODE Head;
      int iCount;
      
      SinglyLL();
      void InsertFirst(int no);
      void InsertLast(int no);
      void InsertAtPosition(int no,int ipos);
      void DeleteFirst();
      void DeleteLast();
      void DeleteAtPosition(int ipos);
      void Display();
      
 
};
 
SinglyLL :: SinglyLL()
{
   iCount = 0;
   Head = NULL;  
}

void SinglyLL :: InsertFirst(int no)
{
   PNODE newn = new NODE;  // PNODE newn = (PNODE)malloc(sizeof(struct node));
   
   newn->data = no;
   newn->next = NULL;
   
   if(Head==NULL)
   {
      Head = newn;
      iCount++;
   }
   else
   {
      newn->next = Head;
      Head = newn;
      iCount++;    
   }
     
 
}
void SinglyLL :: InsertLast(int no)
{
    PNODE newn = new NODE; // PNODE newn = (PNODE)malloc(sizeof(NODE));
    
    newn -> data = no;
    newn -> next = NULL;
    
    if(Head == NULL)
    {
       Head = newn;
       iCount++;
    }
    else
    {
       PNODE temp = Head;
       while(temp->next!=NULL)
       {
          temp = temp->next;
       }
       temp->next = newn;
       iCount++;
    }
}
void SinglyLL :: InsertAtPosition(int no,int ipos)
{
   PNODE newn = new NODE; //PNODE newn = (PNODE)malloc(sizeof(NODE));
   
   newn->data = no;
   newn->next = NULL;
   if(ipos<1 || ipos>iCount+1)
   {
      cout<<"Invalid Position : "<<endl;
      return;
   }
   else if(ipos==1)
   {
     InsertFirst(no);
     iCount++;
   }
   else if(ipos == iCount+1)
   {
     InsertLast(no);
     iCount++;
   }
   else
   {
      PNODE temp = Head;
      for(int iCnt = 1;iCnt < ipos -1;iCnt++)
      {
         temp = temp->next;
      }
      newn->next = temp->next;
      temp->next = newn;
      iCount++;
   }

}
void SinglyLL :: DeleteFirst()
{
    if(Head==NULL)  //if(iCount == 0)
    {
       return;
    }
    else if(Head->next==NULL)  // else if(iCount == 1)
    {
      delete Head;
      Head = NULL;
      iCount--;
    }
    else
    {
      PNODE temp = Head;
      Head=Head->next;
      delete temp;
      iCount--;
    }

}
void SinglyLL :: DeleteLast()
{
   if(Head==NULL)  //if(iCount == 0)
    {
       return;
    }
    else if(Head->next==NULL)  // else if(iCount == 1)
    {
      delete Head;
      Head = NULL;
      iCount--;
    }
    else
    { 
       PNODE temp = Head; 
       while(temp->next->next != NULL)
       {
         temp=temp->next;
       }
       delete temp->next;
       temp -> next = NULL;
       iCount--;
    }

}
void SinglyLL :: DeleteAtPosition(int ipos)
{
   if(ipos<1 || ipos>iCount)
   {
     cout<<"Invalid Position \n";
     return; 
   }
   else if(ipos == 1) 
   {
     DeleteFirst();
     iCount--;
   }
   else if(ipos == iCount)   
   {
     DeleteLast();
     iCount--;
   }
   else
   {
      PNODE temp = Head;
      for(int iCnt = 1;iCnt < ipos-1;iCnt++)
      {
         temp = temp->next;
      }
      PNODE temp2 = temp->next;
      temp->next = temp2->next;
      delete temp2;
      iCount--;
   }


}
void SinglyLL :: Display()
{
     cout<<"Elements of Linked ist are  : "<<endl;
     PNODE temp = Head;
     while(temp!=NULL)
     {
        cout<< "|"<<temp->data << " |-> " ; 
        temp = temp->next;
     }
     cout<<"NULL"<<"\n";
  
}



int main()
{
   SinglyLL obj1;
   
   cout<<"Total elements in linked list are:" <<obj1.iCount<<"\n";  
   
   
   obj1.InsertFirst(11);
   obj1.InsertFirst(21);
   obj1.InsertFirst(51);  
    
   obj1.Display();
   cout<<"Total elements in linked list are:" <<obj1.iCount<<"\n";
   
   obj1.InsertLast(61);
   obj1.InsertLast(71);
   obj1.InsertLast(81);
    
   obj1.Display();
   cout<<"Total elements in linked list are:" <<obj1.iCount<<"\n";
   
   obj1.InsertAtPosition(101,5);
   
   obj1.Display();
   cout<<"Total elements in linked list are:" <<obj1.iCount<<"\n"; 
   
   obj1.DeleteFirst();
    
   obj1.Display();  
   cout<<"Total elements in linked list are:" <<obj1.iCount<<"\n";
   
   obj1.DeleteLast();
    
   obj1.Display();  
   cout<<"Total elements in linked list are:" <<obj1.iCount<<"\n";
 
   obj1.DeleteAtPosition(4);
   
   obj1.Display();
   cout<<"TOtal elements in Linked list are : "<<obj1.iCount<<"\n";
 
  return 0;
}
