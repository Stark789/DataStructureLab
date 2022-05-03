#include<iostream>
using namespace std;
int binarysearch(int arr[],int first,int last,int search);
int main()
{
	int n,i,search,loc;
	cout<<"Enter the number of elements:"<<endl<<"\t";
	cin>>n;
	int arr[n];
	int first=0,last;
	cout<<"Enter the elements:"<<endl;
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<"The elements that you entered:"<<endl;
	for(i=0;i<n;i++)
	cout<<arr[i]<<endl;
	cout<<"Enter the element that your lokking for:"<<endl;
	cin>>search;
	last=n-1;
	loc=binarysearch(arr,first,last,search);
	cout<<"the element that you wanted to search for is:"<<search<<"  is found at the positon of the array: \t"<<loc;
	return 0;
}
int binarysearch(int arr[],int first,int last,int search)
{
	int middle;
	if(first<=last)
	{
		middle=(first+last)/2;
		if(arr[middle]==search)
			return middle+1;
		else if(arr[middle]<=search)
			return binarysearch(arr,middle+1,last,search);
		else
			return binarysearch(arr,first,middle-1,search);
	}
}
