//Effiecient Operation
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
      sum+=arr[i]*((n-i)*(i+1));
    }
	cout<<sum;
	return 0;
	
}
