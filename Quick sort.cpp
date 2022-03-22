#include<iostream>
using namespace std;
void quicksort(int arr[],int low,int high);
int partition(int arr[],int low,int high, int pivot);
void swap(int arr[],int pos1,int pos2);
int main()
{
	int i,n;
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array:"<<endl;
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<"the elements that you entered are:"<<endl;
	for(i=0;i<n;i++)
	cout<<arr[i]<<endl;
	quicksort(arr,0,n-1);
	cout<<"the array after the sorted"<<endl;
	for(i=0;i<n;i++)
	cout<<arr[i]<<endl;
	return 0;
}
void quicksort(int arr[],int low,int high)
{
	if(low<high)
	{
		int pivot=arr[high];
		int pos=partition(arr,low,high,pivot);
		quicksort(arr,low,pos-1);
		quicksort(arr,pos+1,high);
	}
}
int partition(int arr[],int low,int high, int pivot)
{
	int i,j;
    i=j=low;
	while(i<=high)
	{
		if(arr[i]>pivot)
		i++;
		else
		{
			swap(arr,i,j);
			i++;
			j++;
		}
	}
	return j-1;
}
void swap(int arr[],int pos1,int pos2)
{
	int temp;
	temp=arr[pos1];
	arr[pos1]=arr[pos2];
	arr[pos2]=temp;
}
