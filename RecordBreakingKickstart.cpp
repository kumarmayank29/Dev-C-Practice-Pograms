//Record Breaking (GOOGLE KICKSTART)
/*
Problem
Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is Vi. A day is record breaking if it satisfies both of the following conditions:

The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.
Note that the very first day could be a record breaking day!
Please help Isyana find out the number of record breaking days.

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the integer N. The second line contains N integers. The i-th integer is Vi.

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of record breaking days.

Limits
Time limit: 20 seconds per test set.
Memory limit: 1GB.
1 = T = 100.
0 = Vi = 2 × 105.
Test set 1
1 = N = 1000.
Test set 2
1 = N = 2 × 105 for at most 10 test cases.
For the remaining cases, 1 = N = 1000.
Sample

Input
 	
Output
 
4
8
1 2 0 7 2 0 2 0
6
4 8 15 16 23 42
9
3 1 4 1 5 9 2 6 5
6
9 9 9 9 9 9

  
Case #1: 2
Case #2: 1
Case #3: 3
Case #4: 0

  
In Sample Case #1, the bold and underlined numbers in the following represent the record breaking days: 1 2 0 7 2 0 2 0.

In Sample Case #2, only the last day is a record breaking day.

In Sample Case #3, the first, the third, and the sixth days are record breaking days.

In Sample Case #4, there is no record breaking day.*/

//For A day(Vi) to be Record Breaking
//Two conditions must be satisfied
//
//1)Suppose 5th day is Record Breaking day this implies Visitors[5]>Visitors[4,3,2,1]
//2)Either 5th day is Last day ||V[i]>V[i+1] or Visitors[5thday]>Visitors[6thday]

//BRUTE FORCE
/*Traverse over all elements and check if its record breaking or not.To check if A[i] is record breaking 
We need to iterate from i-1 to 0 and check for all elements i-1 to 0 A[i] is greater.It takes whole one iteration
For n elements complexity is O(n^2) which wont be accepted in Test Set 2 give TLE so think O(n/nlogn/logn/root(n) solution)

So if somehow i-1 to 0 walle operation ko optimize karle so we could reduce complexity.
FOR STEP 1 :We need to check a[i]>a[i-1],a[i-2]....a[0] which is same as a[i]>max(a[i-1],a[i-2]....a[0]).

For this we keep variable mx(USE CONCEPT OF MAXTILLi) and store in it maximum value till a[i].Then we check 
a[i]>mx&&a[i]>a[i+1](for i+1<n).Update mx=max(mx,a[i]).This takes O(1) for n elements takes O(n)*/


#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Total number days\n";
	cin>>n;
	int *arr=new int(n);
	if(n==1)
	{
		cout<<"1"<<endl;
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int mx=INT_MIN;
	int ans=0;
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]>mx&&arr[i]>arr[i+1])
		{
			ans++;
		}
		mx=max(mx,arr[i]);
	}
	
	cout<<ans<<" "; 
	
}

