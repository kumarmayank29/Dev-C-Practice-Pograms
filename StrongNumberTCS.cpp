#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
	//4!=4*3*2*1
	int fact=1;
	for(int i=1;i<n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int StrongNumber(int num)
{
	int temp=num;//145 145%10= 5
	int sum=0;
	while(temp>0)
	{
		int digit=temp%10;
		int fact=factorial(digit);
		sum=sum+fact;
		temp=temp/10;
	}
	if(num==sum)
	{
		return 1;
	}
	else
	{
		return -1;
	}
	
}

int main()
{
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		int l=StrongNumber(i);
		if(l==1)
		{
			cout<<i<<endl;
		}
		
	}


}
