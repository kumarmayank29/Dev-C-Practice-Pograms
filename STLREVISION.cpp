#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	//ARRAY STL
	//Declaration :array<dtype,size>={a,b,c};
	array<int,5> arr={1,2,3,4,5};
	
	//Generic
	for(auto it=arr.begin();it!=arr.end();it++)
	{
		cout<<*it<<" ";
	}
	
	cout<<endl;
	//For each
	
	for(auto it:arr)
	{
		cout<<it<<" ";
	}
	cout<<endl;
	//Size of Array
	cout<<arr.size()<<endl;
	
	//Front or First
	cout<<arr.front()<<" "<<arr.at(0)<<endl;
	
	//End Element or last element
	cout<<arr.back()<<" "<<arr.at(arr.size()-1)<<endl;
	
	//arr.fill(10);
	
	array<int,4> ar;
	ar.fill(10);
	for(auto it:ar)
	{
		cout<<it<<" ";
	}
	
	cout<<endl;
	cout<<"****************************************** ARRAY STL FINISHED ******************************************";
	cout<<endl;
	//Vector STL( ONE DIMENSIONAL)
	//Declaration :vector<dtype> vec(size,filler);
	//vector<int> vec1(4,0); Creates a vector of size 4 filled with 0
	
	//Empty Vector:  vector<int> vec
	cout<<endl;
	vector<int> vec;
	
	//vec.push_back()
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);
	vec.push_back(60);
	
	for(auto it:vec)
	{
		cout<<it<<" ";
	}
	
	vec.pop_back();
	cout<<endl;
	cout<<vec.back()<<" "<<vec.front()<<endl;
	
	//Size of Vector
	vec.emplace_back(60); //or vec.push_back(60)
	cout<<vec.size()<<endl;
	
	//Copy content of one vector to another
	
	vector<int> vec1(4,6);
	vector<int> vec2(vec1);
	vector<int> vec3(vec1.begin(),vec1.end()-1);
	//Method 1
   //vector<int> vec2(vec1);
   
   //Method 2
   //vector<int> vec3(vec1.begin(),vec1.end());  //  [) vec1.begin() is inclusive and vec1.end() is exclusive
   cout<<endl;
   for(auto it:vec2)
   {
   	cout<<it<<" ";
   }
   cout<<endl;
    for(auto it:vec3)
   {
   	cout<<it<<" ";
   }
   cout<<endl;
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
   
   
   //Vector STL( TWO DIMENSIONAL)
   //Declaration :vector<vector<dtype> vec
   vector<vector<int>> vecc;
   
   vector<int> vec4(4,6); //6 6 6 6
   vector<int> vec5(4,5); //5 5 5 5
   vector<int> vec6(4,7); //7 7 7 7
   vecc.push_back(vec4);
   vecc.push_back(vec5);
   vecc.push_back(vec6);
   for(auto element:vecc)
   {
   	 for(auto it:element)
   	 {
   	 	cout<<it<<" ";
	 }
	 cout<<endl;
   	
   }
   cout<<endl;
   
   //How to Define 10*20 vector  with same element
   
   vector<vector<int> >v1_1(10,vector<int> (20,6));
   for(auto element:v1_1)
   {
   	for(auto it:element)
   	{
   		cout<<it<<" ";
	}
	cout<<endl;
   }
   vector<int> vec7(20,8);
   v1_1.push_back(vec7);
   for(auto element:v1_1)
   {
   	for(auto it:element)
   	{
   		cout<<it<<" ";
	}
	cout<<endl;
   }
   
   
   //Array of Vectors
   
   //int arr[10]-->array with 10 integers
	cout<<endl;
	cout<<endl;

    vector<int> arrr[4];     //--->array with 4 empty vectors [vec1  vec2  vec3.....] Size fixed wrt array but dunamic wrt vector.

     arrr[0].push_back(10);
     arrr[1].push_back(20);
     arrr[2].push_back(30);
     arrr[3].push_back(60);

     arrr[0].push_back(10);
     arrr[1].push_back(20);
     arrr[2].push_back(30);
     arrr[3].push_back(60);

     arrr[0].push_back(10);
     arrr[1].push_back(20);
     arrr[2].push_back(30);
     arrr[3].push_back(60);

     arrr[0].push_back(10);
     arrr[1].push_back(20);
     arrr[2].push_back(30);
     arrr[3].push_back(60);

    for( auto vctr:arrr) //[vec1  vec2 ........]
    {
	for(auto it:vctr)
	{
		cout<<it<<" ";
	}
	cout<<endl;
    }
    cout<<endl;
    cout<<"****************************************** VECTOR STL FINISHED ******************************************";
	cout<<endl;
    
    
    //SETS OR ORDERED SETS
	
	//Declaration :set<dtype> st;
	//Set Stores everything in ascending fashion
	//Set always contain unique elements
	//insertion,find,deletion all happen in log n time
	

	
	//Given n elements tell me number of unique elements.int arr[5]={1,2,3,2,1};
	
	/*
	int n;
	set<int>st;
	cout<<"Enter Number of elements of array "<<endl;
	cin>>n;
	int *a1=new int(n);
    for(int i=0;i<n;i++)
	{
		cin>>a1[i];
		st.insert(a1[i]);    //st.insert() used to insert element in set in log n time or st.emplace(ele) (less time taking)
		
	}
	cout<<"Count of Unique elements is "<<st.size();  //To get size of set
	cout<<endl;
	for(auto it:st)
	{
		cout<<it<<" ";
	}
	*/

	
	//Erase Functionality of set(TC:log n)
	set<int>st1={1,5,7,8,6,4};
	cout<<"Set before erasing ";
	for(auto it:st1)
	{
		cout<<it<<" ";
	}
	//Case 1:Erase First element
	st1.erase(st1.begin());
	cout<<endl;
	cout<<"Set after erasing ";
	for(auto it:st1)
	{
		cout<<it<<" ";
	}
	cout<<endl;
	//Case 2:Erase {4,5,6,7,8} Erase in Range incase of set
	
	
	//Case 3:st.erase(key) -Erase perticular element
	
	st1.erase(6);
	cout<<"Set after erasing ";
	for(auto it:st1)
	{
		cout<<it<<" ";
	}
	cout<<endl;
    //Set has no Front() and back() function
    //[4 5 7 8]
    auto itt=st1.find(7); //itt will be iterator(Address of that key) to element 7
    cout<<*itt<<endl;
    
    auto ittt=st1.find(10009);
    cout<<*ittt<<endl;
    cout<<*(st1.end())<<endl; //If element is not present then itertor will have address of location end+1
    
    //To Print set
    for(auto it=st1.begin();it!=st1.end();it++)
    {
    	cout<<*it<<" ";
	}
	
	//Case 3:st.erase(st.begin(),st.end())-Erase entire set
	st1.erase(st1.begin(),st1.end());
	cout<<endl;
    cout<<st1.size()<<endl;
	
	cout<<"****************************************** ORDERED SET STL FINISHED ******************************************";
	cout<<endl;
	
	
	//Unordered Set
	/*
	1)unordered_set<int>st
	2)Element stored in any random order
	3)Operations of unordered set are same as set
	4)Average TC O(1) but worst case linear in nature O(n)
	*/
	
	unordered_set<int> uset={1,45,67,23,5,4,556,567};
	for(auto it:uset)
	{
		cout<<it<<" ";
	}
	
	//Insertion
	uset.insert(568);
	uset.insert(569);
	uset.insert(570);
	for(auto it:uset)
	{
		cout<<it<<" ";
	}
	
	//Erasing
	//case 1:Erasing First element
	uset.erase(uset.begin());
	cout<<endl;
	for(auto it:uset)
	{
		cout<<it<<" ";
	}
	cout<<endl;
	//case 2:Erasing in a Range
	
	
	//case 3:Erasing a pertivular element
	uset.erase(5);
	for(auto it:uset)
	{
		cout<<it<<" ";
	}
	cout<<endl;
	//Case 4:Erasing the whole unordered set
	uset.erase(uset.begin(),uset.end());
	cout<<uset.size();
	cout<<endl;

	//Find function
	unordered_set<int> uset1={1,3,5,6,9,8};
	//Sucessful Search.Returns iterator to the key to be searched
//	auto it3=uset1.find(568);  //This wont work because element is absent in unordered set so it will point to some illigal memory
//	cout<<*it3<<endl;
	//Unsucessful Search.Returns iterator to the end element 
	auto it4=uset1.find(1);
	cout<<*it4<<endl;
	
	cout<<"****************************************** UNORDERED SET STL FINISHED ******************************************";
	cout<<endl;
	
	//Multiset
	/*
	Properties
	Declaration :  multiset<int>ms;
	1)Help to store all elements in Sorted Order
	2)It stores duplicates also
	*/
	
	//Insertion
	multiset<int>ms;
	ms.insert(1);
	ms.insert(1);
	ms.insert(2);
	ms.insert(2);
	ms.insert(2);
	ms.insert(3);
	ms.insert(5);
	ms.insert(5);
	ms.insert(3);
	ms.insert(5);
	ms.insert(5);
	
	//Print the multiset
	for(auto it:ms)
	{
		cout<<it<<" ";
	}
	cout<<endl;
	//Find function will return an iterator to the first instance of that key
	auto itr=ms.find(1);
	cout<<*itr<<endl;
	
	
	//case 1:Erase perticular element.It will delete all instances of that key
	ms.erase(3);
	for(auto it:ms)
	{
		cout<<it<<" ";
	}
	cout<<endl;
	
	//case 2:Erase only First instance of key.Find returns iterator to first instance of that key
	ms.erase(ms.find(1));
	for(auto it:ms)
	{
		cout<<it<<" ";
	}
	cout<<endl;
	
	//case 3:Erase two instances of key
	//ms.erase(ms.find(5),ms.find(5)+2) //5 5 5 5 [)
	//for(auto it:ms)
	//{
	//	cout<<it<<" ";
	//}
	//cout<<endl;
	
	//case 4:Erase whole multiset
	
	
	ms.erase(ms.begin(),ms.end());
	cout<<endl;
    cout<<"Size after deleting all elemets of Multiset "<<ms.size()<<endl;
    
    //Count instances of perticular element
    cout<<ms.count(5);
    cout<<endl;
    
    cout<<"****************************************** MULTISET STL FINISHED ******************************************";
	cout<<endl;
	
	
	//MAP OR ORDERED MAP
	/*
	Properties
	0.map<key,value>mpp;
	1.Similar to Python Dictionaries
	2.It stores element as per keys
	3.Map stores only unique keys
	4.Map maintains linearly increasing order
	*/
	map<string,int>mpp;
	mpp["raj"]=27;
	mpp["hima"]=31;
	mpp["sandeep"]=67;
	mpp["tank"]=89;
	mpp["yank"]=90;

/*	
	|hima
	|raj
	|Sandeep
	|Tank
	|Yank
*/

   //Updating values
   mpp["raj"]=29;
   
   
  //mpp.emplace("raj",45);  SEE IT!!
  cout<<mpp["raj"]<<" ";
  cout<<endl;
   
   for(auto it:mpp)
  {
  	cout<<it.first<<" "<<it.second<<endl;
  }
  cout<<endl;
  
    //Find Function
  auto idf=mpp.find("yank");
  cout<<idf->second<<endl;
  
  // auto idf1=map.find("prerana"); Error but will point to last+1 location of map
  
  //Erasing First element
  mpp.erase(mpp.begin());
  for(auto it:mpp)
  {
  	cout<<it.first<<" "<<it.second<<endl;
  }
  cout<<endl;
  
  //Erasing in a Range
  //mpp.erase(mpp.begin(),mpp.begin()+2) SEE IT!!
  
  //Erasing in map takes place as per key
  mpp.erase("raj");
   for(auto it:mpp)
  {
  	cout<<it.first<<" "<<it.second<<endl;
  }
  cout<<endl;
  
  //Check if map is Empty or not
  if(mpp.empty()){
  	cout<<"Yes Map is empty"<<endl;
  }
  else{
  	cout<<"Chutiya hai kya"<<endl;
  }
  cout<<endl;
  
  //Method 1
  cout<<"Printing by Method 1"<<endl;
  for(auto it:mpp)
  {
  	cout<<it.first<<" "<<it.second<<endl;
  }
  
  //Method 2
  cout<<"Printing by Method 2"<<endl;
  for(auto it=mpp.begin();it!=mpp.end();it++)  //     it =[ key val  ] it.first=key it.second=value
  {
  	cout<<it->first<<" "<<it->second<<endl;
  }
  
  //Erase the entire map
  mpp.clear();
  

  
  //Check if map is Empty or not
  if(mpp.empty()){
  	cout<<"Yes Map is empty"<<endl;
  }
  else{
  	cout<<"Chutiya hai kya"<<endl;
  }
  //mpp.count(key); will always give 1
  auto it=mpp.count("hima");
  cout<<it;
  
  //Printing of map
  //It is a pair pair<int,int>pr; pr.first=1; pr.second=10
  cout<<endl;
  cout<<"****************************************** MAP OR ORDERED MAP STL FINISHED ******************************************";
  cout<<endl;
  
  //Unordered_map 
	/*
	1)unordered_map<key,value>mpp;
	2)Element stored in any random order
	3)Operations of unordered map are same as map
	4)Almost O(1) in all cases
	5)But worst case linear in nature O(n) which is container size
	*/
	cout<<endl<<endl<<endl;
	cout<<"****************************************** UNORDERED MAP STL FINISHED ******************************************";
    cout<<endl;
	

	//Pair Class
	pair<int,int> pr1={1,2};
//	pr.first=1;
//	pr.second=2;
    pair<pair<int,int>,int> pr2={{1,2},2};
    cout<<pr2.first.first<<" "<<pr2.first.second<<endl;
    
    pair<pair<int,int>,pair<int,int>> pr3={{1,2},{2,3}};
    cout<<pr3.first.first<<" "<<pr3.second.second<<endl;
    /*
    vector<pair<int,int>> vec;
    set<pair<int,int>> st;
    map<pair<int,int>,int> mpp;
    
    WE CANNOT DEFINE A PAIR FOR UNORDERED MAP
    */
    cout<<"****************************************** PAIR STL FINISHED ******************************************";
    cout<<endl;
    
    
	
	//MultiMap
//	Properties
//	1.multimap<key,value>mpp
//  2.Sorted +Multiple Keys Rest all functionalities are same
    multimap<string,int> mp;
    mp.emplace("raj",2);
    mp.emplace("raj",4);
    for(auto it:mp)
    {
    	cout<<it.first<<" "<<it.second<<endl;
	}
	cout<<"****************************************** MULTIMAP STL FINISHED ******************************************";
    cout<<endl;
    
    //Stack
    /*
    Properties
    1.stack<dtype> st
    2.It is LIFO Data Structure
    3.Opertions on a Stack -push() or emplace(),pop(),top(),size(),empty()
    */
    
    
    //PUSH
    stack<int> st;
    st.push(2);
    st.push(4);
    st.push(3);
    st.push(1);
    
    //ORDER OF STACK
    /*
    |1
    |3
    |4
    |2
    */
    
    cout<<st.top()<<endl; //1
    st.pop();			  //1 deleted
    cout<<st.top()<<endl; //3
    st.pop();			  //3 deleted	
    cout<<st.top()<<endl; //4
    bool flag=st.empty();
    cout<<flag<<endl;     //false
    
    //Copy elements of one stack to other
	cout<<"Copied Stack"<<endl;
	stack<int>st2(st);
	 while(!st2.empty())
    {
    	cout<<st2.top()<<endl;
    	st2.pop();
	}
    //Print Stack
    while(!st.empty())
    {
    	cout<<st.top()<<endl;
    	st.pop();
	}
	

    
    //Delete Whole Stack
    while(!st.empty())
    {
    	st.pop();
	}
	//Size of Stack or Number of elements in Stack
	cout<<st.size()<<endl;
	
	//When ever we use st.top() .Always have a check that stack is not empty
	if(st.empty()){
		cout<<"Stack is Empty.Kaha Ghus rahe ho!"<<endl;
	}
	else{
		cout<<st.top()<<endl;
	}
	cout<<"****************************************** STACK STL FINISHED ******************************************";
    cout<<endl;
    
    //Queue
    /*
    Properties:
    	1.queue<dtype> name;
    	2.Follows FIFO principle
    	3.Common functions push,front,pop,size,empty
    	4.SEE THIS!!! dublicates wala check karo
    */
	
	queue<int> q;
	q.push(1);
	q.push(5);
	q.push(3);
	q.push(6);
//  <---	| 1 | 5 | 3 | 6 | 	 <----

    
    
    //front and back
    cout<<"Front Element "<<q.front()<<endl<<"Last Element "<<q.back()<<endl;
    
    //q.pop() and size()
    cout<<"Previous Size "<<q.size()<<endl;
    q.pop();
    cout<<"Size after pop operation "<<q.size()<<endl;
    
    //Printing a Queue
    queue<int>q2(q);
	 while(!q2.empty())
    {
    	cout<<q2.front()<<endl;
    	q2.pop();
	}
    
    //Delete whole Queue
    while(!q.empty())
    {
    	q.pop();
    	
	}
	//Check Condition
	cout<<"Size of Empty Queue"<<q.size()<<endl;
    if(q.empty())
    {
    	cout<<"Phir ghus rahe ho Chutiya Salle!"<<endl;
	}
	else
	{
		cout<<q.front()<<endl;
	}
	cout<<"****************************************** QUEUE STL FINISHED ******************************************";
    cout<<endl;
    
    //Priority Queue
    /*
    0. priority_queue<dtype>name
    1. Duplicates are allowed
    2. Stores all elements in sorted order and operations are done in logn
    3. Common Functions push,pop,top,size,empty
    */
    
    //MAX PRIORITY QUEUE-MAX ELEMENT AT TOP
    priority_queue<int> pq;
    pq.push(1);
    pq.push(5);
    pq.push(2);
    pq.push(6);
    /*
    |6
    |5
    |2
    |1
    */
    
    //top
    cout<<pq.top()<<endl;      //6
    pq.pop();
    cout<<pq.top()<<endl;     //5
    
    //Printing a PQ
    priority_queue<int>pq2(pq);
	 while(!pq2.empty())
    {
    	cout<<pq2.top()<<endl;
    	pq2.pop();
	}
    
    
    //Delete The PQ
    while(!pq.empty())
    {
    	pq.pop();
	}
	//Size of PQ
	cout<<pq.size()<<" "<<endl;    //0
	//Check Condition
	if(pq.empty())
	{
		cout<<"Priority Queue Marr Gaya"<<endl;
	}
	else
	{
		cout<<pq.size();
	}
	
	//How to make max priority queue convert to min priority queue 
	/*
	Max PQ
	|6
    |5
    |2
    |1
    
    MIN PQ
    |1
    |2
    |5
    |6
    */
    priority_queue<int> pqm;
    pqm.push(-1);
    pqm.push(-5);
    pqm.push(-2);
    pqm.push(-6);
    /*
    |-1
    |-2
    |-5
    |-6
    */
    cout<<(-1)*pqm.top()<<endl;
    while(!pqm.empty())
    {
    	cout<<(-1)*pqm.top()<<endl;
    	pqm.pop();
	}
	/*
	| 1
	| 2
	| 5
	| 6
	*/
    
    cout<<"****************************************** MAX PRIORITY QUEUE STL FINISHED ******************************************";
    cout<<endl;
    
    //MIN PRIORITY QUEUE---SEE IT!!!
    
    cout<<"****************************************** MIN PRIORITY QUEUE STL FINISHED ******************************************";
    cout<<endl;
    
    
    //DEQUEUE
    /*
    1.dequeue<int>dq;
    2.push_front(),push_back()
    3.pop_front(),pop_back()
    4.begin,rbegin,end,rend
    5.size
    6.clear
    7.empty
    8.at
    */
    deque<int>dq;
    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);
    dq.push_front(3);
    // 3 30 20 10
    dq.pop_back(); //10
    dq.pop_front();//3
    while(!dq.empty())
    {
    	cout<<dq.front()<<endl;//30 20
    	dq.pop_front();
	}
	
	cout<<"****************************************** DEQUEUE STL FINISHED ******************************************";
    cout<<endl;
    
    //LIST
    /*
    push_front()
    push_back()
    pop_front()
    pop_back()
    begin,rbegin,end,rend
    size
    clear
    empty
    at
    remove-O(1)
    */
    
    cout<<"****************************************** LIST STL FINISHED ******************************************";
    cout<<endl;
    
    
    
    
    
    
    
    
	
    
    
	
    
    

	
	
    
    
    
    
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//priority Queue
	//Minimum/Maximum PQ
	//Dequeue
	//List
	//Bitset
	//Algorithms(V3)
	//Direct Sort(vector,array)
	//Direct Reversing(vector,array)
	
	
	
}

