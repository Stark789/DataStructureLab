#include<iostream>                        
using namespace std;

class Node
{
public:
    int info;
    Node *prev ;
   Node *next;
     
}; 

class List: public Node
{
     Node *first,*last; 
public:
    List()//this is a constructor 
    {
        first=NULL;
        last=NULL;
    }
    void create();// declaration of function to create linked list 
    void insert();//declaration of function to insert data into linked list 
    void delet();//declaration of function to delete data from the linked list
    void displayforward();
    void displaybackward();
    void search();//declaration of function to search the data in the linked list
    void sort();
    void reverse();
    
};//end list class

void List::create()        
                                                            
{
    Node *temp;                                            
    temp=new Node;//memory allocation to the node 
    int  n;
    cout<<"\nEnter an Element:";
    cin>>n;//reading the element that is to be inserted       
    temp->info=n; // allocating data value to the node      
    temp->prev=NULL;             
    temp->next=NULL;          
    if(first==NULL)               
    {
        first=temp; 
        last=temp;  
    }                                                         
      else                                                               
    {
        last->next=temp;
        temp->prev=last;                     
        last=temp;                       
    }                                                           
}                                    
void List::insert()                                       
{
   
    Node *prevnode,*curnode;
    prev=NULL;                                        
    curnode=first;// first is assigned to cur in other words cur is pointing 
    int count=1,pos,ch,n;
    Node *temp;
    temp=new Node;
    cout<<"\nEnter an Element:";
    cin>>n;
    temp->info=n;
    temp->prev=NULL;
    temp->next=NULL;
    cout<<"\nINSERT AS\n1:FIRSTNODE\n2:LASTNODE\n3:IN BETWEEN FIRST&LAST NODES";
    cout<<"\nEnter Your Choice:";
    cin>>ch;
    switch(ch)
    {
    case 1:
        temp->next=first;
       first->prev=temp;
        
        first=temp;
        break;
    case 2:
        last->next=temp;
       temp->prev=last;
        last=temp;
        break;
    case 3:
        cout<<"\nEnter the Position to Insert:";
        cin>>pos;
        while(count!=pos)
        {
            prevnode=curnode;
            curnode=curnode->next;
            count++;
        }
        if(count==pos)
        {
            prevnode->next=temp;
           temp->next=curnode;
          curnode->prev=temp;

        }
        else
            cout<<"\nNot Able to Insert";
        break;
 
    }
}



void List::delet()
{
    Node *prevnode,*curnode=first;
    prevnode=NULL;
    int count=1,pos,ch;
    cout<<"\nDELETE\n1:FIRSTNODE\n2:LASTNODE\n3:IN BETWEEN FIRST&LAST NODES";
    cout<<"\nEnter Your Choice:";
    cin>>ch;
    switch(ch)

    {
    case 1:
        if(first!=NULL)
        {
            cout<<"\nDeleted Element is "<<first->info;
            first=first->next;
           first->prev=NULL;
        }
        else
            cout<<"\nNot Able to Delete";
        break;
    case 2:
        while(curnode!=last) 
        {
            prevnode =curnode ;
            curnode =curnode ->next;
           curnode->prev=NULL;
        }
        if(curnode==last)
        {
            cout<<"\nDeleted Element is: "<<curnode->info;
            prevnode->next=NULL;
            prevnode->prev=NULL;
            last=prevnode;
        }
        else
            cout<<"\nNot Able to Delete";
        break;
    case 3:
        cout<<"\nEnter the Position of Deletion:";
        cin>>pos;
        while(count!=pos) 
                                 {
            prevnode=curnode;
            curnode=curnode->next;
                       
            count++;
        }//we need to move to tha place where node is to be deleted 
        if(count==pos)
        {
            cout<<"\nDeleted Element is: "<<curnode->info;
            prevnode->next=curnode->next;
        }
        else
            cout<<"\nNot Able to Delete";
        break;
    }//switch
}//end of the function 
void List::displayforward()
{
    Node *temp;
    temp=first;
    if(temp==NULL)
    {
        cout<<"\nList is Empty";
    }
    while(temp!=NULL)
    {
        cout<<temp->info;
        cout<<"<-->";
        temp=temp->next;
           }
    cout<<"NULL";
}//end display
 
void List::displaybackward()
{
    Node *temp;
    temp=last;
    if(temp==NULL)
    {
        cout<<"\nList is Empty";
    }
    while(temp!=NULL)
    {
        cout<<temp->info;
        cout<<"<-->";
        temp=temp->prev;
           }
    cout<<"NULL";
}//end display

void my_swap(Node *node1,Node *node2)
{

int temp=node1->info;
node1->info=node2->info;
node2->info=temp;
}
void List:: sort()
{
   Node* n1;
   Node* n2;
   Node* head;
   head=first;
   for(n1 = head; n1->next != NULL; n1 = n1->next)
   {
       for( n2 = n1->next; n2 != NULL; n2 = n2->next)
       {
          if(n1->info > n2->info)
		  {
			 int temp=n1->info;
			 n1->info=n2->info;
			 n2->info=temp;
		  }
       }
   }   
}

void List::search()
{
    int value,pos=0;
    bool flag=false;
    if(first==NULL)
    {
        cout<<"List is Empty";
        return;
    }
    cout<<"Enter the Value to be Searched:";
    cin>>value;
    Node *temp;
    temp=first;
    while(temp!=NULL)
    {
        pos++;
        if(temp->info==value)
        {
            flag=true;
            cout<<"Element"<<value<<"is Found at "<<pos<<" Position";
            return;
        }
        temp=temp->next;
       
    }
    if(flag==false)
    {
        cout<<"Element "<<value<<" not Found in the List";
    }
}

 void List::reverse()

{
    Node *temp;
    temp=last;
    if(temp==NULL)
    {
        cout<<"\nList is Empty";
    }
    while(temp!=NULL)
    {
        cout<<temp->info;
        cout<<"<-->";
        temp=temp->prev;
           }
    cout<<"NULL";
}//end display


int main()
{
    List l;
    int ch;
    do
    {
        cout<<"\n**** MENU ****";
        cout<<"\n1:CREATE\n2:INSERT\n3:DELETE\n4:DISPLAYFORWARD\n5:DISPLAYBACKWORD\n6:SORT\n7:SEARCH\n8.REVERSE\n9:EXIT\n";
        cout<<"\nEnter Your Choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
            l.create();
            break;
        case 2:
            l.insert();
            break;
        case 3:
            l.delet();
            break;
        case 4:
            l.displayforward();
            break;
        case 5:
            l.displaybackward();
            break;
        case 6:
            l.sort();
            break;
        case 7:
            l.search();
            break;
         case 8:l.reverse();
                 break;
         case 9: cout<< "exit";
               break;
            default : 
            cout <<"invalid option ";
        }
    
    }while(ch!=9);
    return 0;
}
