#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
void Fibnocci(int len)
{
	//1 1 2 3 
	//n3=n1+n2
	/*
	int n1=0,n2=1,n3,i,number;    
 cout<<"Enter the number of elements: ";    
 cin>>number;    
 cout<<n1<<" "<<n2<<" "; //printing 0 and 1    
 for(i=2;i<number;++i) //loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  cout<<n3<<" ";    
  n1=n2;    
  n2=n3;    
 }    
	
	
	*/
	int n1=1;
	int n2=1;
	int n3;
	int counteve=0;
	int countodd=2;
	cout<<n1<<" "<<n2<<" "; 
	for(int i=2;i<len;i++)
	{
		n3=n1+n2;
		if(n3%2==0&&n3!=0)
		{
			counteve++;
		}
		else
		{
			countodd++;
		}
		cout<<n3<<" ";
		n1=n2;
		n2=n3;
		
		
	}
	cout<<endl;
	cout<<counteve<<endl;
	cout<<countodd;
}
int main()
{
	int len;
	
	cin>>len;
	if(len>5&&len<=20)
	{
		Fibnocci(len);
	}
	else
	{
	     cout<<"INVALID INPUT";
	}

	
	
}
