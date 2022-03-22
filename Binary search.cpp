#include<iostream>
using namespace std;
int main()
{
	int n,i,arr[10],s,first=0,middle,last;
	cout<<"Enter the number of array:"<<endl;
	cin>>n;
	cout<<"Enter the elements of the array:"<<endl;
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<endl;
	cout<<"the elements that you entered are as follows:"<<endl;
	for(i=0;i<n;i++)
	cout<<arr[i]<<endl;
	cout<<"Enter the element that you need to be searched: \t";
	cin>>s;
	cout<<s<<endl;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(s<arr[middle])
		last=middle-1;
		else if(s==arr[middle])
		{
			cout<<"the searched element:"<<s<<"is found at: "<<middle+1;
			break;
		}
		else
		first=middle+1;
		middle=(first+last)/2;
	}
	if(first>last)
	cout<<"the searched element :"<<s<<"is not found in the given array of elements"<<endl;
	return 0;
}
