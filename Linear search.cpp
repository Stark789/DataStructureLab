#include<iostream>
using namespace std;
int main()
{
	int i,n,flag=0,a,t;
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array:"<<endl;
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<"the Elenments that you entered are:"<<endl;
	for(i=0;i<n;i++)
	cout<<arr[i]<<endl;
	cout<<"enter the element that you wanted to search:"<<endl;
	cin>>a;
	for(i=0;i<n;i++)
	{
		if(a==arr[i])
		{
			flag=1;
			t=i;
			break;
		}
	}
	if(flag=1)
	{
		cout<<arr[t]<<"\t position of the element is:\t"<<t<<endl;
	}
	else
	{
		cout<<"the element that you entered is not there in the array."<<endl;
	}
	
}
