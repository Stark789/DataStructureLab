#include <iostream>
using namespace std;
class Node {
public:
int data;
   Node *next;
};
 Node* front = NULL;
 Node* rear = NULL;
 Node* temp;
void Insert() {
int val;
cout<<"Insert the element in queue : "<<endl;
cin>>val;
if (rear == NULL) {
rear = new Node;
rear->data = val;
rear->next = NULL;
front = rear;
   } else {
temp= new Node;
temp->data = val;
rear->next = temp;
temp->next = NULL;
rear = temp;
   }
}
void Delete() {
temp = front;
if (front == NULL) {
cout<<"Queue is Underflow"<<endl;
return;
   }
else
if (temp->next != NULL) {
temp = temp->next;
cout<<"Element deleted from queue is : "<<front->data<<endl;
//free(front);
front = temp;
   } else {
cout<<"Element deleted from queue is : "<<front->data<<endl;
//free(front);
front = NULL;
rear = NULL;
   }
}
void Display() {
temp = front;
if ((front == NULL) && (rear == NULL)) {
cout<<"Queue is empty"<<endl;
return;
   }
cout<<"Queue elements are: ";
while (temp != NULL) {
cout<<temp->data<<" ";
temp = temp->next;
   }
cout<<endl;
}
int main() {
int ch;
cout<<"1) Insert element to queue"<<endl;
cout<<"2) Delete element from queue"<<endl;
cout<<"3) Display all the elements of queue"<<endl;
cout<<"4) Exit"<<endl;
do {
cout<<"Enter your choice : "<<endl;
cin>>ch;
switch (ch) {
case 1: Insert();
break;
case 2: Delete();
break;
case 3: Display();
break;
case 4: cout<<"Exit"<<endl;
break;
default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
return 0;
}

