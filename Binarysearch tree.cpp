#include<iostream>
using namespace std;

class BST {

struct node {
	int data;
	node *left;
	node *right;
    };

node *root;

node *makeEmpty(node *t) {
	if(t == NULL)
	return NULL;
	{
	makeEmpty(t->left);
	makeEmpty(t->right);
	delete t;
	}
	return NULL;
    }

node *insert(int x, node *t)
    {
	if(t == NULL)
	{
	    t = new node;
	t->data = x;
	t->left = t->right = NULL;
	}
	else if(x < t->data)
	t->left = insert(x, t->left);
	else if(x > t->data)
	t->right = insert(x, t->right);
	return t;
    }

node *findMin(node *t)
    {
	if(t == NULL)
	return NULL;
	else if(t->left == NULL)
	return t;
	else
	return findMin(t->left);
    }

node *findMax(node *t) {
	if(t == NULL)
	return NULL;
	else if(t->right == NULL)
	return t;
	else
	return findMax(t->right);
    }

node *remove(int x, node *t) {
	node* temp;
	if(t == NULL)
	return NULL;
	else if(x < t->data)
	t->left = remove(x, t->left);
	else if(x > t->data)
	t->right = remove(x, t->right);
	else if(t->left && t->right)
	{
	temp = findMin(t->right);
	t->data = temp->data;
	t->right = remove(t->data, t->right);
	}
	else
	{
	temp = t;
	if(t->left == NULL)
		t = t->right;
	else if(t->right == NULL)
		t = t->left;
	delete temp;
	}

	return t;
    }

void inorder(node *t) {
	if(t == NULL)
	return;
	inorder(t->left);
	cout<< t->data << " ";
	inorder(t->right);
    }
void postorder(node *t) {
	if(t == NULL)
	return;
	postorder(t->left);
	postorder(t->right);
	cout<< t->data << " ";	
    }
void preorder(node *t) {
	if(t == NULL)
	return;
	cout<< t->data << " ";	
	preorder(t->left);
	preorder(t->right);	
    }
node *find(node *t, int x) {
	if(t == NULL)
	return NULL;
	else if(x < t->data)
	return find(t->left, x);
	else if(x > t->data)
	return find(t->right, x);
	else
	return t;   
    }

public:
BST() {
	root = NULL;
    }

    ~BST() {
	root = makeEmpty(root);
    }

void insert(int x) {
	root = insert(x, root);
    }

void remove(int x) {
	root = remove(x, root);
    }

void inorderdisplay() {
	inorder(root);
	cout<<endl;
    }
void postorderdisplay() {
	postorder(root);
	cout<<endl;
    }
void preorderdisplay(){
		preorder(root);
		cout<<endl;
	}

void search(int x) {
	root = find(root, x);
	if(root->data>0)
	cout<<"Element Found:"<<root->data;
	else
	cout<<"Element Not Found:";
    }
};

int main() {
    BST t;
int ch;
do
    {
cout<<"\n==============================";
cout<<"\n 1. Insert Element \n 2. InOrder \n 3.PreOrder \n 4.PostOrder \n 5. Remove \n 6. Search \n 7. Exit";
cout<<"\n===============================";
cout<<"\nEnter Your Choice:";
cin>>ch;
int ele;
switch(ch)
     {
	case 1: cout<<"\n Enter Element:";
		cin>>ele;
		t.insert(ele); break;
	case 2: cout<<"\n In-Order :";t.inorderdisplay();break;
	case 3: cout<<"\n Pre-Order:"; t.preorderdisplay(); break;
	case 4: cout<<"\n Post-Order:";t.postorderdisplay();break;
	case 5:
			cout<<"\n Enter Element to Remove:";
			cin>>ele;
			t.remove(ele); break;
	case 6: 
			cout<<"\n Enter Element to Search:";
			cin>>ele;
			t.search(ele); break;
	case 7:
	cout<<"EXIT"<<endl;
	break;					
	default:cout<<"Invalid Choice";
      }	
}while(ch>=1 &&ch<=7);
return 0;
}

