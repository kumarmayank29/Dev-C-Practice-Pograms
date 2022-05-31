#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
//	Vector is like a dynamic Arrays just that its built in has a capability to resize itself automatically
//	Vectors me elements are stored in contiguous fashion similar to arrays.
//	
//	Inserting at the end takes differential
//	time as sometimes there can be aneed to extend the array
//	
//	Inserting at middle/or in beginning will take linear time
//	
//	Remaining last elements takes constant time to access because no resising occurs

//10 <------20<------30

//v={10 20 30}
//Declaration of Vector
vector<int> v;

//To Insert Element in a vector
v.push_back(10);
v.push_back(20);
v.push_back(30);


//To access element from vector
cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<"\n";


//Size of vector
cout<<"Initial Size "<<v.size();
cout<<"\n";

//To delete Last Element use pop_back function.This function directly deletes the value and does not return anything
v.pop_back();

cout<<v.size();

cout<<"\n\n";
vector<int> v1;

for(int i=1;i<=10;i++)
{
	v1.push_back(i);

}

for(int i=1;i<10;i++)
{
	cout<<v1[i]<<" "<<"\n";
}


for(int i=1;i<10;i++)
{
	cout<<v1[i]<<" "<<"\n\n";
}

//Direct Sort function in arrays in C++
int arr[]={123,876,56,24,34,789,4423,2638,3992,4672};
sort(arr,arr+10);
for(int i=0;i<10;i++)
{
	cout<<arr[i]<<"\t";
	
}
//Direct Sort function in vectors in C++
/* Not supported in Dev C++
vector<int> v3{123,876,56,24,34,789,4423,2638,3992,4672};
sort(v3.begin(),v3.end());
for(int i=0;i<10;i++)
{
	cout<<v3[i]<<"\t";
	
}
*/

v1.erase(v1.unique(v1.begin(),v1.end()),)


 



	
}
