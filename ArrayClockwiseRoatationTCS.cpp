#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//void rotate(int arr[],int n,int K)
void rotate(int arr[],int n)
{
		
		int temp=arr[n-1];
		for(int i=0;i<n;i++)
		{
		
		    arr[i]=arr[i+1];
			//arr[i+1]=arr[i];
			if(i==n-1)
			{
				arr[0]=temp;
			}
		}
	

	
	
}

int main()
{
	
	//int N,K;
	int N;
	
	cout<<"Enter the Size of Array";
	cin>>N;
	int *arr=new int(N);
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
		cout<<endl;
	}
//	cout<<"Enter the Number of Rotations";
//	cin>>K;
//	
//	rotate(arr,N,K);
    rotate(arr,N);
	
	for(int i=0;i<N;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
}
