#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
LINEAR SEARCH-
For successful search Worst case time complexity is O(n) as it takes n comparisions and best case time complexity is O(1)
as it takes only one comparision

For Unsuccessful search there is only worst case time complexity which is O(n)

// 1  2  3 4  5 6
For average case -Consider we want to search first element then number of comparision is 1,for finding 2nd element number of comparision
is 2 ........ and so on (1+2+3+4.....+n)/n= n(n+1)/2n = (n+1)/2 =O(n)

Linear Search can be improved using two methods 

1)Transposition -Swapping Key with adjacent element of array this will ensure that 
next time when same element is searched it takes 1 comparision less

2)Move to front or Move to Head- Swapping the key with 0th element of array this ensures next time we search for the key we are able
to find it in just 1 comparision thereby reaching best case of linear search that is O(1)
*/
void swap(int *x,int *y)
 {
 int temp=*x;
 *x=*y;
 *y=temp;
 }
 
int MoveToFrontLinearSearch(int *arr,int key,int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			swap(&arr[0],&arr[i]);               //Successful Search
			return i;
		}
	}
	return -1;                      //Unsuccessful Search
}
 
/*
int TranspositionLinearSearch(int *arr,int key,int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			swap(&arr[i],&arr[i-1]);               //Successful Search
			return i;
		}
	}
	return -1;                      //Unsuccessful Search
}
*/

//Generic Linear Search
/*
int LinearSearch(int arr[],int key,int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			return i;                //Successful Search
		}
	}
	return -1;                      //Unsuccessful Search
}
*/

int main()
{
	int n,key;
	cout<<"Enter Number of Elements in the array"<<endl;
	cin>>n;
	
	cout<<"Start Entering the Elemnts"<<endl;
	int *arr=new int (n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
   for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t\t";
	}
	cout<<endl;
	cout<<"Enter value you want to search"<<endl;
	cin>>key;
	
    //int res=LinearSearch(arr,key,n);
    //int res=TranspositionLinearSearch(arr,key,n);
	int res=MoveToFrontLinearSearch(arr,key,n);      
    if(res!= -1)
    {
    	cout<<"Element found successfully at index \t"<<res<<endl;
    	
	}
	else 
	{
		cout<<"Element not found"<<endl;
	}
	
	
    
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t\t";
	}
	
	

    
}
