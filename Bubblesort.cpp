#include <iostream>
using namespace std;
int main()
{
	int arr[]={45,2,31,56,24,67,34,78,23};
	int n=9;
//For n elements --------->n-1------>Array sort because 1 element already sorted.ek interation me ek element sort hota hi,sofor n elemets 
//Number of iteration N-1 because 1 element will automatically will be positioned in its correct place in sorted array 

// 1st interation -------->n-1
// 2nd iteration---------->n-2
// ......
// ith iteration---------->n-i
 
 //RULE:IF TWO ELEMENTS COME IN WRONG ORDER THEN THEY WILL BE SWAPPED 

//	int iteration=1;
//	while(iteration<n){
//		for(int i=0;i<n-iteration;i++)
//		{
//			if(arr[i]>arr[i+1])
//			{
//				arr[i]^=arr[i+1]^=arr[i]^=arr[i+1];
//			}
//		}
//		iteration++;
//	}
//	
//	for(int i=0;i<9;i++)
//	{
//		cout<<arr[i]<<"\t";
//	}

for(int iteration=1;iteration<n;iteration++){       //because n-1 me sort hojaiga pura array eslioye <n tak hai
	for(int i=0;i<n-iteration;i++)
	{
		if(arr[i]>arr[i+1])
			{
				arr[i]^=arr[i+1]^=arr[i]^=arr[i+1];
			}
	}
}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}

	
}
