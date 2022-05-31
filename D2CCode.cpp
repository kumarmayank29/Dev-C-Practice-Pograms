#include<iostream>
using namespace std;
int main()
{
	int k,n;
	
	cout<<"Enter Length of array "<<endl;
	cout<<"Enter k "<<endl;
	cin>>n>>k;
	int *arr=new int(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	// i=(a[i] + i * k) % N
	int test=0;
	for(int i=0;i<n;i++)
	{
		if(i==((arr[i]+i)*k)%n)
		{
			test=1;
		}
		
	}
	if(test==1)
	cout<<"YES";
	else
	cout<<"NO";
}
