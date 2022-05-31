#include<bits/stdc++.h>
/*There are lot of libraries in C++ like #include<math.h> ,#include<string.h>.
So in Competitive programming definately write down #include<bits/stdc++.h>
But never follow using #include<bits/stdc++.h> then using this all files
need to be imported and that consumes alot of time*/


/*******************************************************************************************************************/
using namespace std;
/*C++ has taken all of its function and put that into std namespace.So if we do not 
add this function.Some common function of C++ as common as cout we wont be able to access.Hence with writting
using namespace std to access cout we need to write std::cout<<val<<endl */
/*******************************************************************************************************************/



/*namespace is basically scope anything within that can be accessed using namespaceName::val or function*/
namespace Mayank{
	int val=50;
	int getVal()
	{
		return val*50;
	}
}
//NOT CLEAR
//	struct node{
//		string str;
//		int num;
//		double doub;
//		char x;
//		
//		//To initialize data member use constructor
//		node(string str,int num,double doub,char x)
//		{
//			this->str=str;
//			this->num=num;
//			this->doub=doub;
//			this->x=x;
//		}
//	};



//array<int,3> arr; ----->Will have all zero {0, 0, 0}
#include <array>
#include <iostream>
int main()
{
	/*
	int val=50;
	double val=10.0;
	cout<<val<<endl;
	 
	This gives an error conflicting declaration.Two same variable declared with
	different datatype 
	
	To avoid this we use something called a namespace. 
	*/
	
	
	//Concept of namespace and use of :: operator to access values within scope of namespace 
	/*
	double val=50.0;
	cout<<val<<endl;
	cout<<Mayank::val<<endl;
	cout<<Mayank::getVal();
	*/
	
	
	//Conept of structure.Suppose we want a datatype where we want to store integer,character,double.So we
	//need to create own datatype called struct
	
	/* Not so good way to Define
	   node raj;
	   raj.str="Mayank";
	   raj.num=2000;
	   raj.doub=92.4;
	*/
	
	//Better Way
  /*	node raj=new node("Mayank",2000,92.4,'');
	cout<<raj.str<<" ";
	cout<<raj.num<<" ";
	cout<<raj.doub<<" ";
	cout<<raj.x<<" "; 
	
*/

  
  
  
  
//Container 1  ARRAYS
     
     /*******************************************************************************************
     1.int arr[100] 
     
     2.Defining array in another way array<int,100> arr; .This means
       array of size 100 is declared
       
     3.array<int,3> arr;  --->{? ? ? anything}
	   If we declare a int array within main and we dont
	   initialize them then it can be anything,ie any value can be garbage 
	   as well.However if we declare this array globally then they are auto
	   matically initialized to 0.Declaring anything golabally gives array 
	   all values as 0.
	   
	 4.array<int,5> arr={1,5,6,?,?}; ---->{1,5,6,0,0}  
	 
	 5.array<int,5> arr={1,?,?,?,?}; ---->{1,0,0,0,0} 
	 
	 6.4.array<int,5> arr={0}; ---->{0,0,0,0,0} //Pehle me 0 baitha deta baki khud zero ho jatte 
	 
	 
	 7.
	            #include<bits/stdc++.h>
                using namespace std;
                int main()
                {
	                    array<int,10> arr;
	                    arr.fill(10);
	                    for(int i=0;i<10;i++)
	                       {
	 	                        cout<<arr.at(i)<<endl;
	                        }
                 } 
	    
             Output:10
                    10
                    10
                    10
                    10
                    10
                    ..
                    10
       */
	   
	   
	   //Concept of Iterators
	   
	   /*
	   Iterators :begin()-Points First element of Data Structure
	             :rbegin()-It points to last element of Data Structure
	             :end()-   It points to address right after last element
				 :rend()-Points to address right before Start or first element of array 
				 
				 :it   -Initially points to first element of array
				 :auto -It automatically takes the datatype of value which iterator points to
				 
				 Note: We should always do *it because it is just a iterator pointer to access value
				       we need to use *it
	   */
	  
	  
	  /* 
	  array<int,5> arr ={1,3,4,5,6};
	  cout<<*(arr.begin())<<endl; //begin points to first element of array hence *(arr.rbegin()) gives first element
	  cout<<*(arr.rbegin())<<endl;//rbegin points to last element of array hence *(arr.rbegin()) gives last element
	  
	  //Printing array using iterators
	   for(auto it=arr.begin();it!=arr.end();it++)
	   {
	   	 cout<<*it<<" ";
	  }	
	  cout<<endl;
	  //Reverse Printing array using iterators
	  for(auto it=arr.rbegin();it!=arr.rend();it++)
	  {
	  	cout<<*it<<" ";
	 }
	 cout<<endl;
	  //Second Method of Reverse Printing array using iterators
	  for(auto it=arr.end()-1;it>=arr.begin();it--)
	  {
	  	cout<<*it<<" ";
	 }	
	 cout<<endl;
	 
	 //Third Method is to print array using a loop
	 for(auto it:arr)
	 {
	 	cout<<it<<" ";
		 }	
	 cout<<endl;
	 
	 //Concept of for each loop -Its properties are 
//	 1)It uses syntax for(auto it:nameOfArray){cout<<it} 
//	 2)Here "it" is not pointer its a element itself ,so no need to use *it
//	 3)for each loop is always forwarding in nature by default and can be used with String,array ,Vectors everything
//	 4)Example below      

     string name="Mayank";
	 for(auto it:name)
	 {
	 	cout<<it<<" ";
	  } 
	  cout<<endl;
	  //Name of iterator can be anything
	  for(auto element:name)
	 {
	 	cout<<element<<" ";
	  } 
	  cout<<endl;
	  for(auto it=name.rbegin();it!=name.rend();it++){
	  	cout<<*it<<" ";
	  }
	  
	  cout<<endl<<endl;
	  //For size,First/Front element,For last/back element
	  cout<<"Size of Array arr "<<arr.size()<<endl<<endl;                     
	  cout<<"Front or First element of Array arr "<<arr.front()<<endl<<endl;  //arr.at(0)
	  cout<<"Back or Last element of Array arr "<<arr.back()<<endl<<endl;          //arr.at(arr.size()-1)
	  
	  
	 */
	 
	 
	 
	  
	  
//Container 2 VECTORS

/********************************************************************************************************************************/	  
//1.For C++ If we declare array inside int main max size of array for int,double,char	of size 10^6
//2.For C++ If we declare array inside int main max size of array for datatype bool	of size 10^7
//3.For C++ If we declare array outside int main max size of array for int,double,char of size 10^7
//4.For C++ If we declare array inside int main max size of array for datatype bool    of size 10^8
//5.Vector says don't tell me size.Instead use vector<int> arr --->Declared a empty vector arr={}
//6.But we can repeatatively do push_back() to insert in vector,and pop_back() to shrink the vector
//7.Vectors can dynamically increase their size.For example:
//8.vector<int> arr,Then important vector functions are 
   //8.1)arr.push_back(element) 
   //8.2)arr.pop_back() 
   //8.3)arr.size()
   //8.4)arr.clear() -Erase all elements of vector at once
   //8.5)vector<int> vec3(vec2.begin(),vec2.end());  OR  vector<int> vec3(vec2)

/*

//push_back  pop_back   size()  clear()
vector<int> arr={};
cout<<"Size of Empty Vector "<<arr.size()<<endl;
arr.push_back(1);
cout<<"Size of Vector with 1 element "<<arr.size()<<endl;
arr.push_back(2);
cout<<"Size of Vector with 2 element. "<<arr.size()<<endl;
cout<<"Hence we see vectors dynamically increase their size as we push elments in it.Final Size with 2 elements "<<arr.size()<<endl;
arr.push_back(3);arr.push_back(4);arr.push_back(5);arr.push_back(6);
for(auto it:arr){
	cout<<it<<" ";
}
cout<<endl;
arr.pop_back();//Directly removes one element	
cout<<"After popping last element 6"<<endl;
for(auto it:arr){
	cout<<it<<" ";
}  
cout<<endl<<endl;

arr.clear();
cout<<arr.size()<<endl<<endl;

//Copy content of one vector to another

vector<int> vec1(4,0); //Creates a vector of size 4 filled with 0
for(auto it:vec1)
{
	cout<<it<<" ";
} 
cout<<endl;
//Method 1
vector<int> vec2(vec1);
for(auto it:vec2)
{
	cout<<it<<" ";
} 
cout<<endl;
//Method 2
vector<int> vec3(vec1.begin(),vec1.end());  //  [) vec1.begin() is inclusive and vec1.end() is exclusive
for(auto it:vec3)
{
	cout<<it<<" ";
} 
cout<<endl;


//arr.push_back(1) vs arr.emplace_back(1) So,only difference is emplace_back(1) is faster

//Swapping vectors
vector<int> v1={1,2,3};
vector<int> v2={4,5,6};
swap(v1,v2);
for(auto it:v1)
{
	cout<<it<<" ";
} 
cout<<endl;
for(auto it:v2)
{
	cout<<it<<" ";
} 
cout<<endl<<endl;


//2D VECTORS in C++
vector<vector<int>> vec;

vector<int> raj1;
raj1.push_back(11);
raj1.push_back(22);
raj1.push_back(33);

vector<int> raj2;
raj2.push_back(10);
raj2.push_back(20);
raj2.push_back(30);

vector<int> raj3;
raj3.push_back(19);
raj3.push_back(24);
raj3.push_back(27);

vec.push_back(raj1);
vec.push_back(raj2);
vec.push_back(raj3);

for(auto vctr:vec){
	for(auto it:vctr){
		cout<<it<<" ";
	}
	cout<<endl;

}
	cout<<endl;
	cout<<endl;
//Traditional way
for(int i=0;i<vec.size();i++)
{
	for(int j=0;j<vec[i].size();j++)
	{
		cout<<vec[i][j]<<" ";
	}
	cout<<endl;
}
cout<<endl;
cout<<endl;
//How to Define 10*20 vector  with same element

vector<vector<int> > vect(10,vector<int> (20,0));

for(auto vctr:vect)
{
	for(auto it:vctr)
	{
		cout<<it<<" ";
	}
	cout<<endl;
}


//How to make array of vectors
//int arr[10]-->array with 10 integers
	cout<<endl;
	cout<<endl;

vector<int> arrr[4];     //--->array with 4 empty vectors

arrr[0].push_back(10);
arrr[1].push_back(20);
arrr[2].push_back(30);

arrr[0].push_back(10);
arrr[1].push_back(20);
arrr[2].push_back(30);

arrr[0].push_back(10);
arrr[1].push_back(20);
arrr[2].push_back(30);

arrr[0].push_back(10);
arrr[1].push_back(20);
arrr[2].push_back(30);

for( auto vctr:arrr)
{
	for(auto it:vctr)
	{
		cout<<it<<" ";
	}
	cout<<endl;
}

*/




//Container 3:SETS OR ORDERED SET

/*************************************************************************************************************************/

//1.Given n elements tell me number of unique elements.Suppose we have array {2,5,1,2,5} .So if we want number of unique element
//  we can use Set
//2.Declare set set<int> st; 
//3. Set does not support indexing .We cannot access set by st[0],st[1] .This is wrong
//4.We use insert function to insert within a set like st.insert(10)...so on
//5.Insert operation in Set takes log n time where n is size of set
//6.Set Stores everything in ascending fashion
//7.To access set elements we need to use iterators like begin(),rbegin(),end(),rend()
//8.Erasing happens in log n time
//9.st.find(element) returns iterator that point to element and if element is not present it=st.end() st.end() is address after end
//    element.This find operation takes logn time
//10.st.size()-Number of elements in aset
//11.st.emplace(10)-Similat to st.insert(10) just .emplace is somewhat fast
//12. st.erase(st.begin(),st.end()) Delete whole set

/*
int arr[5]={1,2,3,2,1};
set<int> st;
for(auto it:arr)
{
	st.insert(it);
}
cout<<"Elements of array are"<<endl;
for(auto it:arr)
{
	cout<<it<<" ";
}
cout<<endl;
cout<<"Elements of set are unique"<<endl;
for(auto it:st)
{
	cout<<it<<" ";
}
cout<<endl;cout<<endl;
//Erasing in a Set Syntax= st.erase(iterator) or st.erase(st.begin(),st.begin()+2) Here st.begin()->inclusive but st.begin()+2 is exclusive,hence it will go till st.begin()+1 only
//Or st.erase(element_to_erase)

set<int> st1;
st1.insert(1);
st1.insert(2);
st1.insert(3);
st1.insert(4);
st1.insert(5);
st1.insert(6);

//Actual set
cout<<"Actual Set"<<endl;
for(auto it:st1)
{
	cout<<it<<" ";
}
cout<<endl;cout<<endl;

cout<<"Set after deleting first element"<<endl;
//To delete first element of set
st1.erase(*(st1.begin()));

for(auto it:st1)
{
	cout<<it<<" ";
}
cout<<endl;cout<<endl;

cout<<"Set after deleting last element"<<endl;
//Last element of set delete
//st1.erase(st1.end()-1);
st1.erase(*(st1.rbegin()));
//printing set using for each loop
for(auto it:st1)
{
	cout<<it<<" ";
}
cout<<endl;cout<<endl;

//NOT CONFIRM
//cout<<"Set after deleting 2,3,4"<<endl;
//st1.erase(st1.begin(),st1.begin()+2);
//for(auto it:st1)
//{
//	cout<<it<<" ";
//}
cout<<endl;cout<<endl;

//Find function in set.

set<int> st2;
st2.insert(1);st2.insert(2);st2.insert(3);st2.insert(4);st2.insert(5);
//When Element present
auto it=st2.find(4);
cout<<*it<<endl;
//When element absent.Gives value present at address after end position irrespective of whatever absent element we give
auto itt=st2.find(14);
cout<<*itt<<endl;

//Size of set
cout<<st2.size();

*/

/**********************************************************************************************************************************/

//Container 3:UNORDERED SET

1. Unordered set can store elements in any order
2. 














				       
}
				       
				 
				  
	       
	   
	   
	                

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
	

	
	
	
	
	
	
	

