#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//long long longestArithmeticSubsequence(int *arr,int n){
//    long long ans=2;
//	long long count=2;
//	for(int i=2;i<n;i++)
//	{
//			if(arr[i]-arr[i-1]==arr[i-1]-arr[i-2])   
//			{
//				count++;
//			    ans=max(ans,count);
//			}
//			else
//			{
//				count=2;
//			}
//			 
//		
//		
//	}
//	return ans;
//}
int main()
{
   
    int C;
    cin>>C;
    for(int tc=1;tc<=C;tc++)
    {
        long long n;
        cin>>n;
        long long *arr=new long long(n);
        for(int i=0;i<n;i++)
        {
        	cin>>arr[i];
		}
		long long ans=2;
		long long pd=arr[1]-arr[0];
		int j=2;
		
	long long count=2;
	for(long long i=2;i<n;i++)
	{
			if(arr[i]-arr[i-1]==arr[i-1]-arr[i-2])   
			{
				count++;
			    ans=max(ans,count);
			}
			else
			{
				count=2;
			}
			 
		
		
	}
		
        //long long k=longestArithmeticSubsequence(arr,n);
        cout<<"Case #"<<tc<<": "<<ans<<endl;
        
        
    }
}
    
