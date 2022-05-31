//MAX TILL I
//0 -9 1 3 -4 5------>> MAX TILL i---------->0 0 1 3 3 5
#include<iostream>
using namespace std;
int main()
{  
// ans=max(mx,arr[i])  ,ans=0 ,cout<<ans 
    
	int n;
	cout<<"Enter n\n";
	cin>>n;
	int *arr=new int(n);
	int ans=INT_MIN;
	cout<<"Enter values\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		int ans=max(ans,arr[i]);
		cout<<ans<<"\t";
	}
	return 0;
	
}
