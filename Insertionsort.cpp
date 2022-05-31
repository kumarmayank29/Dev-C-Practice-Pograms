#include <iostream>
using namespace std;
int main()
{
	int arr[]={12,45,23,51,19,8};
	int n=6;
	//Concept of Sorted and Unsorted array works here.Assume First element is sorted already for remaining elements 1 to n
	for(int i=1;i<n;i++)
	{
		int currentelement=arr[i];
		int j=i-1;
		while(arr[j]>currentelement&&j>=0)
		{
			arr[j+1]=arr[j]; //Shifting 
			j--;
		}
	   arr[j+1]=currentelement;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}

	
}

