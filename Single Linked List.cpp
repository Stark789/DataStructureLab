#include<iostream>
using namespace std;
class node
{
	public:
		int info;
		node * next;
};
class list: public node
{
	node *first,*last;
	public:
		list()
		{
			first=NULL;
			last=NULL;
		}
		void create();
		void insert();
		void delet();
		void display();
};
void list::create()
{
	node *temp;
	temp=new node;
	int n;
	cout<<"\n Enter an Element:";
	cin>>n;
	temp->info=n;
	temp->next=NULL;
	if(first==NULL)
	{
		first=last=temp;
	}
	else
	{
		last->next=temp;
		last=temp;
	}
}
void list::insert()
{
	node *prev,*cur;
	prev=NULL;
	cur=first;
	int count=1,pos,ch,n;
	node *temp;
	temp=new node;
	cout<<"\n Enter an Element:";
	cin>>n;
	temp->info=n;
	temp->next=NULL;
	cout<<"\n INSERT as 1):First node \n 2):Last node \n 3):Between first & last node";
	cout<<"\n Enter your choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
		{
			temp->next=first;
			first=temp;
			break;
		}
		case 2:
		{
		    last->next=temp;
		    last=temp;
			break;
		}
		case 3:
		{
			cout<<"\n Enter the Position to Insert:";
			cin>>pos;
			while(count!=pos)
			{
				prev=cur;
				cur=cur->next;
				count++;
			}
			if(count==pos)
			{
				prev->next=temp;
				temp->next=cur;
			}
			else
			cout<<"\n Not Able to Insert";
			break;
		}		
	}
}
void list::delet()
{
	node*prev,*cur=first;
	prev=NULL;
	int count=1,pos,ch;
	cout<<"\n Delete \n 1)First node \n 2)Last node \n 3) between the first and last";
	cin>>ch;
	switch(ch)
	{
		case 1:
		{
			if(first!=last)
			{
				cout<<"\n Deleted Element is"<<first->info;
				first=first->next;
			}
			else
			cout<<"\n Not Able to Delete";
			break;
		}
		case 2:
		{
			while(cur!=last)
			{
				prev=cur;
				cur=cur->next;
			}
			if(cur==last)
			{
				cout<<"\n deleted element is:"<<cur->info;
			    prev->next=NULL; 
			    last=prev;
			}
			else
			cout<<"\n Not able to delete";
			break;
		}
		case 3:
		{
			cout<<"\nEnter the position of Deletion";
			cin>>pos;
			while(count!=pos)
			{
				prev=cur;
				cur=cur->next;
				count++;
			}
			if(count==pos)
			{
				cout<<"\n Deleted Element is:"<<cur->info;
			    prev->next=cur->next;
			}
			else
			cout<<"\n Not able to Delete";
			break;
		}
			
	}
}
void list::display()
{
	node *temp;
	temp=first;
	if(temp==NULL)
	{
		cout<<"\n List is Empty";
	}
	while(temp!=NULL)
	{
		cout<<temp->info;
		cout<<"-->";
		temp=temp->next;
	}
	cout<<"NULL";
}
int main()
{
	list obj;
	int ch;
	while(1)
	{
		cout<<"\n**** MENU ****";
		cout<<"\n 1) Create \n 2) Insert \n 3)delete \n 4)Display \n 5)Exit \n";
		cout<<"\n Enter your Choice:\t";
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
				obj.create();
				break;
			}
			case 2:
			{
				obj.insert();
				break;
			}
			case 3:
			{
				obj.delet();
				break;
			}
			case 4:
			{
				obj.display();
				break;
			}
			case 5:
			{
				cout<<"Exit";
				break;
			}
			default:
				cout<<"Invalid Option"<<endl;
				
		}
	}
	return 0;
}
