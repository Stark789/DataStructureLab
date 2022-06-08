#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *left;
		node *right;
};
node *root=NULL;
node *temp;
void insertelement();
void preorder(node *);
void inorder(node *);
void postorder(node *);
int main()
{
	int ch;
	do
	{
	cout<<"\n 1.insert Elements \n 2.preorder \n 3.inorder \n 4.postorder \n5.exit";
cout<<"\n enter ur choice ";
cin>>ch;
switch(ch)
{
case 1:insertelement();break;
case 2:preorder(root);break;
case 3:inorder(root);break;
case 4:postorder(root);break;
case 5:cout<<"EXIT";break;
default:cout<<"invalid operation";
}	
	}while(ch!=5);
}
void insertelement()
{
node *nc;
node *pNode;
int val;
cout<<"\n enter the value ";
cin>>val;
temp=new node;
temp->data=val;
temp->left=NULL;
temp->right=NULL;
if(root==NULL)
{
root=temp;
}
else
{
nc=root;
while(nc!=NULL)
{
pNode=nc;
if(val<nc->data)
nc=nc->left;
else
nc=nc->right;
}
if(val<pNode->data)
{
pNode->left=temp;
}
else
pNode->right=temp;
}
}

void preorder(node *temp)
{
if(temp!=NULL)
{
cout<<" "<<temp->data;
preorder(temp->left);
preorder(temp->right);
}
}
void inorder(node *temp)
{
if(temp!=NULL)
{
inorder(temp->left);
cout<<" "<<temp->data;
inorder(temp->right);
}
}
void postorder(node *temp)
{
if(temp!=NULL)
{
postorder(temp->left);
postorder(temp->right);
cout<<" "<<temp->data;
}
}

