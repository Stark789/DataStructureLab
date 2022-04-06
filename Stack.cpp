#include<iostream>
using namespace std;
int stack[100], n=100,top=-1;
void push(int val)
{
	if(top>=n-1)
	cout<<"Stack Overflow"<<endl;
	else
	{
		top++;
		stack[top]=val;
	}
}
void pop()
{
	if(top<=-1)
	cout<<"Stack Underflow"<<endl;
	else
	{
		cout<<"The popped elements is"<<stack[top]<<endl;
		top--;
	}
}
void display()
{
	if(top>=0)
	{
		cout<<"stack elements are:\t";
		for(int i=top;i>=0;i--)
		cout<<stack[i]<<" ";
		cout<<endl;
	}
	else
	cout<<"stack is empty";
}
int main()
{
	int choice,val;
	cout<<"1) push in stack"<<endl;
	cout<<"2) pop from stack"<<endl;
	cout<<"3) display stack"<<endl;
	cout<<"4) exit"<<endl;
	do
	{
		cout<<"enter choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
				cout<<"Enter value to be pushed:"<<endl;
				cin>>val;
				push(val);
				break;
			}
			case 2:
				{
					pop();
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
