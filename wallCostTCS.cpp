#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
float calCost(float intWal,float extWal,float *intWall,float *extWall)
{
	float C1=0,C2=0;
	for(int i=0;i<intWal;i++)
	{
		C1=C1+18*intWall[i];
	}
	for(int i=0;i<extWal;i++)
	{
		C2=C2+12*extWall[i];
	}
	return (C1+C2);
}



int main()
{
	float intWal; //6
	float extWal; //3
	cin>>intWal>>extWal;
	float *intWall=new float(intWal);
	for(int i=0;i<intWal;i++)
	{
		cin>>intWall[i];
	}
	float *extWall=new float(extWal);
	for(int i=0;i<extWal;i++)
	{
		cin>>extWall[i];
	}
	float cost=calCost(intWal,extWal,intWall,extWall);
	cout<<"Total estimate Cost"<<":"<<cost<<"INR";
	
}
