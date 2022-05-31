//Finding all subarrays
// 12 45 23 51 19 8
//Subarrays are always contiguous and order of elements is also same
//Subsequence may /may not be contiguous in nature but order of elements must be same
//Subarray:Examples---{45 23 51 19},{51 19 8},{12 45 23}
//Subsequence:Examples--{12 23 51},{45 19 8},{8}
//Every Subarray is a subseqeunce but vice versa not true
//Subarray is a subset of subsequence--->TRUE
//Subsequence is a subset of subarray--->FALSE

//Question
//{1,2,3}   
//Possible Subarrays
//1
//1 2
//1 2 3
//2
//2 3
//3


#include<iostream>
using namespace std;
int main()
{

	int n;
	cout<<"Enter n\n";
	cin>>n;
	int *arr=new int(n);
	cout<<"Enter values\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    for(int i=0;i<n;i++)
    {
    	for(int j=i;j<n;j++)
    	{
    		
    	 for(int k=i;k<=j;k++)
    	 {
    	 	cout<<arr[k]<<" ";
		 }
		 cout<<"\n";
    		
		}
		
	}
	return 0;
	
}
