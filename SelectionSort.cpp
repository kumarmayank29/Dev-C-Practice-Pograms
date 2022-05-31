//SELECTION SORT
#include<iostream>
using namespace std;
int main()
{
//To Remember:FIND THE SMALLEST ELEMENT IN ARRAY AND SWAP IT WITH FIRST ELEMENT IN UNSORTED ARRAY 
//DRY RUN
//12 45 23 51 19 8
//8  45 23 51 19 12
//8  12 23 51 19 45
//8  12 19 51 23 45
//8  12 19 23 51 45
//8  12 19 23 45 51
                                                                  
	int arr[]={12,45,23,51,19,8};
//	int arr[]={12,45,12,51,19,51};

	int n=6;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				arr[j]^=arr[i]^=arr[j]^=arr[i]; //Swapping of smaller element with first element of unsorted array
			}
		}
	}
	
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
