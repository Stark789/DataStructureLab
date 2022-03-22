#include<iostream>
using namespace std;
int main()
{
	int i,j,n,pass=0,a[10],temp;
	cout<<"enter the number of elements of the array:"<<endl;
	cin>>n;
	cout<<"enter the array elements:"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<endl;
	cout<<"the elements that you entered are:"<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<endl;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		pass++;
	}
	cout<<"the sorted element are"<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<endl;
	cout<<"the number passes requested to sort the elements are:"<<pass;
	return 0;
}
