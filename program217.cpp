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
typedef struct node ** PPNODE;

class SinglyLL
{
    public : 
    
      //Characteristics 
        PNODE First;
        int iCount;
      
      // Behaviours
        SinglyLL();
        
        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPosition(int no,int ipos);
        
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int ipos);
        
        void Display();

};

/*
Return_Value Class_Name :: Function_Name(parameters)
{

}
*/

SinglyLL :: SinglyLL()
{
   First = NULL;
   iCount = 0;
}

void SinglyLL :: InsertFirst(int no)
{
   // Step1 : Allocate memory for node
   PNODE newn = new NODE;
   
   // Step2 : Initialize node
   newn->data = no;
   newn->next = NULL;
   
   //Step3 : Check if LL is EMpty or not
   if(First == NULL)   //if(iCount==0)
   {
      First = newn;
      iCount++;
   }
   else   // If LL contains at least one node
   {
      newn->next = First;
      First = newn;
      iCount++;
   }
   
}

void SinglyLL :: InsertLast(int no)
{
    // Step1 : Allocate memory for node
   PNODE newn = new NODE;
   
   // Step2 : Initialize node
   newn->data = no;
   newn->next = NULL;
   
   //Step3 : Check if LL is EMpty or not
   if(First == NULL)   //if(iCount==0)
   {
      First = newn;
      iCount++;
   }
   else   // If LL contains at least one node
   {
      
   }
}

void SinglyLL :: InsertAtPosition(int no,int ipos)
{

}

void SinglyLL :: DeleteFirst()
{

}

void SinglyLL :: DeleteLast()
{

}

void SinglyLL :: DeleteAtPosition(int ipos)
{

}

void SinglyLL :: Display()
{
    cout<<"Elements of Linked List are : "<<endl;
    PNODE temp = First;
    
    while(temp!=NULL)
    {
       cout<<"| "<<temp->data << "-> ";
       temp = temp->next;
    }
    cout<<"NULL"<<"\n";
}
int main()
{
   SinglyLL obj1;
   SinglyLL obj2;
   
   
   obj1.InsertFirst(51);
   obj1.InsertFirst(21);
   obj1.InsertFirst(11);
   cout<<"LL of 1st object is : "<<endl;
   obj1.Display();
   
   cout<<"Number of nodes are : "<<obj1.iCount<<"\n";
   
   ////////////////////////////////////////////////////
   obj2.InsertFirst(1001);
   obj2.InsertFirst(510);
   obj2.InsertFirst(210);
   obj2.InsertFirst(110);
   cout<<"LL of 2nd object is : "<<endl;
   obj2.Display();
   
   cout<<"Number of nodes are : "<<obj2.iCount<<"\n";
   
   
   return 0;
}
