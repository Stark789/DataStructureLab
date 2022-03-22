#include<iostream>
using namespace std;
int main()
{
	int i,j,a[10],min,loc,temp,n;
	cout<<"Enter size of the array"<<endl;
	cin>>n;
	cout<<"Enter elements of the array:"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"the given array elements are:"<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<endl;
	for(i=0;i<n;i++)
	{
		min=a[i];
		loc=i;
		for(j=i+1;j<n;j++)
		{
			if(min>a[j])
			{
				min=a[i];
				loc=j;
			}
		}
		temp=a[i];
		a[i]=a[loc];
		a[loc]=temp;
	}
	cout<<endl;
	cout<<"the sorted elements are:"<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<endl;
}
