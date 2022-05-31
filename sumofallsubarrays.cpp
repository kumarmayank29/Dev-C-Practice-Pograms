//Question : 1 2 3
//Solution is Sum of all subarrays
//1 1+2 1+2+3
//2 2+3
//3
//Output
//1 3 6
//2 5
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
    	int currsubarr=0;
    	for(int j=i;j<n;j++)
    	{
    		currsubarr+=arr[j];
    		cout<<currsubarr<<" ";
    		
		}
		cout<<"\n";
		
	}
	return 0;
	
}
