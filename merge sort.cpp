#include<iostream>
using namespace std;
void mergesort(int arr[],int l,int r,int size);
void merge(int arr[],int l,int r,int m,int size);
int main()
{
	int i,size;
	cout<<"Enter the size of the array:"<<endl;
	cin>>size;
	int arr[size];
	cout<<"Enter the elements of the array:"<<endl;
	for(i=0;i<size;i++)
	cin>>arr[i];
	cout<<"the given elements that you entered before sorting are:"<<endl;
	for(i=0;i<size;i++)
	cout<<arr[i]<<endl;
	int r;
	r=size-1;
	mergesort(arr,0,(r),size);
	cout<<"the array elements after sorting:"<<endl;
	for(i=0;i<size;i++)
	cout<<arr[i]<<endl;
	return 0;
}
void mergesort(int arr[],int l,int r,int size)
{
	if(l<r)
	{
		int m=(l+r)/2;
		mergesort(arr,l,m,size);
		mergesort(arr,m+1,r,size);
/**/	merge(arr,l,m,r,size);
	}
}
void merge(int arr[],int l,int m,int r,int size)
{
	int i=1;
	int j=m+1;
	int k=1;
	int temp[size];
	while(i<=m && j<=r)
	{
	if(arr[i]<=arr[j])
	{
		temp[k]=arr[i];
		i++;
		k++;
	}
	else 
	{
		temp[k]=arr[j];
		j++;
		k++;
	}
}
	//copy the remaming elements
	while(i<=m)
	{
		temp[k]=arr[i];
		i++;
		k++;
	}
	//copy the reamaing elements if any
	while(j<=r)
	{
		temp[k]=arr[j];
		j++;
		k++;
	}
	for(int p=1;p<=r;p++)
	{
		arr[p]=temp[p];
	}
}
