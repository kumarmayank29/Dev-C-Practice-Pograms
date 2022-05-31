#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
void reverseString(string s)
{
	if(s.length()==0)
	return;
	
	string restOfString=s.substr(1);
	reverseString(restOfString);
	cout<<s[0];
	
}
bool helper(string s,int start,int end)
{
	if(start==end)
	return true;
	if(start>end)
	return true;
	if(s[start]!=s[end])
	{
		return false;
	}
	else
	{
	  bool t = helper(s,start+1,end-1);  
      return t;
	}
}
void replacePi(string s)
{
	if(s.length()==0)
	{
		return;
	}
	if(s[0]=='p'&&s[1]=='i')
	{
		cout<<"3.14";
		replacePi(s.substr(2));
	}
	else
	{
		cout<<s[0];
		replacePi(s.substr(1));
	}
}
int main()
{
	string s1="Binod";
	string s2="Prerana Sen";
	string s3="racecar";
	reverseString(s2);
	cout<<endl;
	cout<<helper(s3,0,s3.length()-1)<<endl;
	replacePi("pippxxppiixipi");
}
