#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fibnocci(int n)
{
	if(n<=1)
	return n;
	
	return fibnocci(n-2)+fibnocci(n-1);
}
int main()
{
   int number;
   cin>>number;
   cout<<fibnocci(number);
  
	
}
