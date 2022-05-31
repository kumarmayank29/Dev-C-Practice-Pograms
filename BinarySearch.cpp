#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
1. Important Condition for binary search is that Array should be Sorted
2. For Successful Search Best Case Time Complexity =O(1)
       Successful Search Worst Case Time Complexity =O(log2n)
       Successful Search Average Case Time Complexity =O(log2n)
       
3. For Unsuccessful Search Worst Case Time Complexity =O(log2n)
   For Unsuccessful Search Average Case Time Complexity =O(log2n)     
   
4. Can be implemented Recurrsively as well as Iterativily     


*/

/*
int RBinarySearch(int arr[],int key,int low,int high)
{
	if(low<=high)
	{
		int mid=(low+high)/2;
		if(key==arr[mid])
		{
			return mid;
		}
		else if(key<arr[mid])
		{
			return RBinarySearch(arr,key,low,mid-1);
		}
		else
		{
			return RBinarySearch(arr,key,mid+1,high);
		}
	}
	return -1;
}
*/



int BinarySearch(int arr[],int key,int low,int high)
{
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(key==arr[mid])
		{
			return mid;
		}
		else if(key<arr[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	return -1;
}

int main()
{
	int n;
	int *arr=new int(n);
	cout<<"Enter the number of Elements"<<endl;
	cin>>n;
	cout<<"Start Entering the Elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter Element you want to search"<<endl;
	int key;
	cin>>key;
	int low=0;
	int high=n-1;
	int res=BinarySearch(arr,key,low,high);
	//int res=RBinarySearch(arr,key,low,high);
	
	if(res!=-1)
	{
		cout<<"Successful Search,Element found at index "<<res;
	}
	else
	{
		cout<<"Unsuccessful Search,Element not found"<<res;
	}
	
	
	
}
