//Question-{1 2 3}
//1                 1
//1 2               3
//1 2 3             6
//2                 2
//2 3               5
//3                 3
//Total Sum         20
//Very Expensive Operation
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
	int sum=0;
    for(int i=0;i<n;i++)
    {
    	for(int j=i;j<n;j++)
    	{
    		
    	 for(int k=i;k<=j;k++)
    	 {
    	 	sum+=arr[k];
		 }
		 
    		
		}
		
	}
	cout<<sum;
	return 0;
	
}
