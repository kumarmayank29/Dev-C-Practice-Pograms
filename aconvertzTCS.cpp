#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	string neww="";
	getline(cin,str);
	int len=str.length();
	for(int i=0;str[i]!='\0'&&i<len;i++)
	{
		char ch=str.at(i);
		int k=(int)ch;
		if(k>=97&&k<=122)
		{
			int f=97+122-k;
			char chh=(char)f;
			neww=neww+chh;
		}
		else
		{
			neww="";
			break;
			
		}
		
		
	}
	
	cout<<neww;
	
	
	

	
}
