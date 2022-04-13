#include<iostream>
using namespace std;
int queue[10],n=10,front=-1,rear=-1;
void insert()
{
	int val;
	if(rear==n-1)
	{
	   cout<<"Queue if full"<<endl;
	   cout<<"we are unable to insert any more elements into queue"<<endl;
	}
	else
	{
		if(front==-1)
		front=0;
		cout<<"Enter elements to be inserted"<<endl;
		cin>>val;
		rear++;
		queue[rear]=val;
	}
}
void delete1()
{
	if(front==-1||(front>rear))
	{
		cout<<"Queue is underflow"<<endl;
		cout<<"We cannot able to delete any more elements since queue is empty"<<endl;
	}
	else
	{
		cout<<"The deleted elements from the queue is empty"<<queue[front]<<endl;
		front++;
	}
}
void display()
{
	if(front==-1)
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
		for(int i=front;i<=rear;i++)
		cout<<queue[i]<<endl;
	}
}
int main()
{
	int choice;
	cout<<"1) Insert an element into queue"<<endl;
	cout<<"2) Delete an element from the queue"<<endl;
	cout<<"3) Display the elements of the queue"<<endl;
	cout<<"4) Exit"<<endl;
	do
	{
	cout<<"enter choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
				insert();
				break;
			}
			case 2:
				{
					delete1();
					break;
				}
				case 3:
				{
					display();
					break;
				}
				case 4:
				{
					cout<<"Exit"<<endl;
					break;
				}
				default:
				{
					cout<<"Invalid choice"<<endl;
					break;
				}
		}
	}while(choice!=4);
	return 0;
}

