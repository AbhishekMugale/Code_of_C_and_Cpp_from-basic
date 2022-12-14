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

}

void SinglyLL :: InsertLast(int no)
{

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

}
int main()
{
   SinglyLL obj1;
   cout<<sizeof(obj1)<<endl;
   cout<<"First Pointer Contains : "<<obj1.First<<endl;
   cout<<"Number of nodes are : "<<obj1.iCount<<endl;
   
   obj1.InsertFirst(51);
   obj1.InsertFirst(21);
   obj1.InsertFirst(11);
   
   obj.Display();
   
   cout<<"Number of nodes are : "<<obj1.iCount<<"\n";
   
   obj1.InsertLast(101);
   obj1.InsertLast(111);
   obj1.InsertLast(121);
   
   obj.Display();
   
   cout<<"Number of nodes are : "<<obj1.iCount<<"\n";

   return 0;
}
