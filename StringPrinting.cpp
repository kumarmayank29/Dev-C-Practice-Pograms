#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str;

	cout<<"Enter a string"<<endl;
	getline(cin,str);
    int len=str.size();
	cout<<str<<endl;
	
	int i=0;
	int j=len-1;
	while(i<j)
	{
		swap(str[i],str[j]);
		i++;
		j--;
	}
	cout<<str;
	
//	cout<<"************";
//	reverse(str.begin(),str.end());
//	cout<<str<<endl;
//	
	

	
}
