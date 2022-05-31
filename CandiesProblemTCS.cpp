#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int orderno;
	cin>>orderno;
//	if(orderno==0)
//	{
//		cout<<"INVALID INPUT"<<endl;
//		cout<<"NUMBER OF CANDIES AVAILABLE "<<": "<<10;
//		
//	}
	if(orderno>0&&orderno<=5)
	{
		int remaining=10-orderno;
		cout<<"NUMBER OF CANDIES SOLD "<<": "<<orderno<<endl;
		cout<<"NUMBER OF CANDIES AVAILABLE "<<": "<<remaining;
	}
	else
	{
		cout<<"INVALID INPUT"<<endl;
		cout<<"NUMBER OF CANDIES AVAILABLE "<<": "<<10;
	}
	
}
