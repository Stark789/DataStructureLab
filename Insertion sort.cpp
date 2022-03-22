#include<iostream>
using namespace std;
int main()
{
	int i,j,n,temp,k;
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array:"<<endl;
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<"the Elements that you entered are:"<<endl;
	for(i=0;i<n;i++)
	cout<<arr[i]<<endl;
	for(k=1;k<n;k++)
	{
		temp=arr[k];
		j=k-1;
		while(j>=0&&temp<=arr[j])
		{
			arr[j+1]=arr[j];
			j=j-1;
			arr[j+1]=temp;
		}
	}
		cout<<"the sorted elements are:"<<endl;
		for(i=0;i<n;i++)
		cout<<arr[i]<<endl;
		return 0;
	
}


