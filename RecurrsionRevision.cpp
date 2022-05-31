//Recurrsion
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sumtilln(int n)
{
	int sum=0;
	if(n==0)
	return 0;
	sum=sum+n+sumtilln(n-1); 
}

int nRaisedToPowerP(int n,int p)
{
	int ans=1;
	if(p==1)
	{
		return n;
	}
	if(p==0)
	{
		return 1;
	}
	ans=ans*n*nRaisedToPowerP(n,p-1);
	return ans;
	
}

int factorial(int n)
{
	int fac=1;
	if(n==0)
	return 1;
	fac=fac*n*factorial(n-1);
	return fac;
	
}

int PrintNthFibnocciNo(int n)
{
	if(n==0||n==1)
	return n;
	return PrintNthFibnocciNo(n-1)+PrintNthFibnocciNo(n-2);
	
}
bool checkArraySortedOrNotR(int *arr,int n)
{
	if(n==1){
		return true;
	}
	bool restArray=checkArraySortedOrNotR(arr+1,n-1);
	return (arr[0]<arr[1]&&restArray);
   
	
}
void printInDecreasingANDIncreasingOrder(int n)
{
	if(n==0)
	return;
	cout<<n<<endl;
	printInDecreasingANDIncreasingOrder(n-1);
	cout<<n<<endl;
	
	
	
}
//On Going Recurrsion Phase
int firstocc(int *arr,int n,int i,int key)
{
	if(i==n)
    return -1;
	
	if(arr[i]==key)
	return i;
	
	return firstocc(arr,n-1,i+1,key);
	
}
//Returning Phase of Recurrsion
int lastocc(int *arr,int n,int i,int key)
{
	if(i==n)
    return -1;
	int restArray=lastocc(arr,n,i+1,key);
	if(restArray!=-1){
		return restArray;
	}
	if(arr[i]==key)
	{
		return i;
	}
	return -1;
}
 
int main()
{
	int n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	cout<<"Sum till "<<n<<" is "<<sumtilln(n)<<endl;
	int p;
	cout<<"Enter power of n"<<endl;
	cin>>p;
	cout<<n<<"^"<<p<<"="<<nRaisedToPowerP(n,p)<<endl;
	cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;
	cout<<"Which fibnocci Number would you like to see"<<endl;
	int nth;
	cin>>nth;
	cout<<nth<<"th "<<"fibnoci Number of Series is "<<PrintNthFibnocciNo(nth)<<endl;
	
	int num;
	cout<<"Enter number of elements in Array"<<endl;
	cin>>num;
	int *arr=new int(num);
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	bool a=checkArraySortedOrNotR(arr,num);
	if(a)
	{
		cout<<"Sorted Array"<<endl;
	}
	else
	{
		cout<<"Unsorted Array"<<endl;
	}
	
	printInDecreasingANDIncreasingOrder(n);
	cout<<"Enter the Index and the key"<<endl;
	int index,key;
	cin>>index;
	cin>>key;
	cout<<firstocc(arr,n,index,key)<<endl;
	cout<<lastocc(arr,n,index,key)<<endl;
	
}
