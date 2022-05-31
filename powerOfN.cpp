//Power of pow(m,n)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int pow(int n,int p)
{
	if(p==0)
	return 1;
	else
	return pow(n,p-1)*n;
	
}
int main()
{
	int number,power;
	cout<<"Enter Number and Power";
	cin>>number>>power;
	cout<<pow(number,power);
	
	return 0;
}


