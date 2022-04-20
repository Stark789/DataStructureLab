#include<iostream>
using namespace std;
int array[5];
int front= -1,rear=-1,size=5;
void insertfront(int key)
{
	if((front==0 && rear==size-1)||(front== rear+1))
	{
	cout<<"Queue Overflow"<<endl;
    }
    if(front==-1)
	{
	front=0;
	rear=0;
    }
	else if(front==0)
	front=size-1;
	else
	front=front-1;
	array[front]=key; 
}
void insertrear(int key)
{
	if((front==0 && rear==size-1)||(front== rear+1))
	cout<<"Queue Overflow"<<endl;
    if(front==-1)
	front=rear=0;
	else if(rear==size-1)
	rear=0;
	else
	rear++;
	array[rear]=key;
}
void deletefront()
{
	if(front==-1)
	cout<<"Dequeu is empty"<<endl;
	cout<<array[front]<<"IS Deleted!!!"<<endl;
	if(front==rear)
	front=rear=-1;
	else if(front==size-1)
	front=0;
	else
	front++;
}
void deleterear()
{
	if(front==-1)
	cout<<"Dequeu is empty"<<endl;
	cout<<array[rear]<<"Is Deleted!!!"<<endl;
	if(front==rear)
	front=rear=-1;
	else if(rear==0)
	rear=size-1;
	else
	rear--;
}
int getFront()
{
	if(front==-1)
	cout<<"Dequeu is empty"<<endl;
	return array[front];
}
int getRear()
{
	if(front==-1)
	cout<<"Dequeu is empty"<<endl;
	return array[rear];
}
void display()
{
	int f=front,r=rear;
	if(front==-1)
	{
		cout<<"Queue is empty"<<endl;
		return;
	}
	cout<<"Queue elements are :\n";
	if(f<=r)
	{
		while(f<=r)
		{
			cout<<array[f]<<" ";
			f++;
		}
	}
	else
	{
		while(f<=size-1)
		{
			cout<<array[f]<<" ";
			f++;
		}
		f=0;
		while(f<=r)
		{
			cout<<array[f]<<" ";
			f++;
		}
	}
}
int main()
{
	int ch,val;
	cout<<"1)Insert an element the at the rear"<<endl;
	cout<<"2)Insert an element the at the front"<<endl;
	cout<<"3)Delete an element the at the rear"<<endl;
	cout<<"4)Delete an element the at the front"<<endl;
	cout<<"5)Get element at the front End"<<endl;
	cout<<"6)Get element at the rear End"<<endl;
	cout<<"7)Display Queue Elements:"<<endl;
	cout<<"8) Quit"<<endl;
	do
	{
		cout<<"Enter choice:"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					cout<<"Input element for insertion at the beginning(Rear):"<<endl;
					cin>>val;
					insertrear(val);
					break;
				}
			case 2:
			{
				cout<<"Input element for insertion at the last(Front):"<<endl;
				cin>>val;
				insertfront(val);
				break;
			}
			case 3:
			{
				deleterear();
				break;
			}
			case 4:
			{
				deletefront();
				break;
			}
			case 5:
			{
				cout<<endl<<getFront()<<endl;
				break;
			}
			case 6:
			{
				cout<<endl<<getRear()<<endl;
				break;
			}
			case 7:
			{
				display();
				cout<<endl;
				break;
			}
			case 8:
			{
				cout<<endl<<" \t Program End!!!!!";
				break;
			}
			default:
			cout<<"Incorrect Option"<<endl;	
		}
	}while(ch!=8);
	return 0;
}
