#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countRange(int n1,int n2) 
{
	if(n1>=0&&n2>=0)
	{
		int count=0;
		for(int i=n1;i<=n2;i++)
		{
			int num =i;
			bool visited[10]={false};
			while(num)
			{
				if(visited[num%10])
				break;
				
				visited[num%10]=true;
				num=num/10;
			}
			
			if(num==0)
			count++;
		}
		return count; 
		
	}

	
}
int main()
{
	int n1,n2;
	cout<<"Enter n1 and n2"<<endl;
	cin>>n1>>n2;
	int c=countRange(n1,n2);
	cout<<c; 
	
}
