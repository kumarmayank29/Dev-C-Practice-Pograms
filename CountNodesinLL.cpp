#include<iostream>
#include<bits/stdc++.h>
#include <limits>
using namespace std;
//Creation of Node
class Node
{
	public:
		int data;
		Node *next;
	
	Node(int data)
	{
		this->data=data;
		next=NULL;
	}	
};
Node* InsertAtBeginning(Node *head,int data)
{
	Node *newnode=new Node(data);
	newnode->next=head;
	head=newnode;
	return head;
}

Node* InsertAtGivenIndex(Node *head,int data,int index)
{
	Node *newnode=new Node(data);
	Node *temp=head;
	int i=0;
	while(i!=index-1) //Suppose we need to insert at index 2 we need to come at index 2-1=1
	{
		temp=temp->next;
		i++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
	return head;
	
}
Node* InsertAtEnd(Node *head,int data)
{
	Node *newnode=new Node(data);
	Node *temp=head;
	while(temp->next!=NULL) //Traverse till temp->next!=NULL
	{
		temp=temp->next;
		
	}
	temp->next=newnode;
	return head;
	
}

Node* InsertAfterANode(Node *head,Node *prevNode,int data) //an
{
	Node *newnode=new Node(data);
	newnode->next=prevNode->next;
	prevNode->next=newnode;
	return head;
	
}
void printLL(Node *head)
{
	Node *temp=NULL;
	temp=head;
	if(head==NULL)
	{
		cout<<"Linked List is Empty";
	}
	else
	{
		while(temp!=NULL)
		{
			cout<<temp->data<<"\t";
			temp=temp->next;
			
		}
	}
	
}

int countNodesinLLI(Node *head)
{
	int count;
	Node *temp=head;
	while(temp!=NULL)
	{
		temp=temp->next;
		count++;
		
	}
	return count;
}

int countNodesinLLR(Node *head)
{
	
	Node *temp=head;
	if(temp!=NULL)
	{
		return countNodesinLLR(head->next)+1;
		
	}
	else
	{
		return 0;
	}
	
}

int sumOfNodesinLLR(Node *head)
{
	
	Node *temp=head;
	int sum=0;
	if(temp!=NULL)
	{
		sum=sum+temp->data+sumOfNodesinLLR(temp->next);
		
	}
	else
	{
		return 0;
	}
	
	
}

int sumOfNodesinLLI(Node *head)
{
	if(head==NULL) return 0;
	Node *temp=head;
	int sum=0;
	while(temp!=NULL)
	{
		sum=sum+temp->data;
		temp=temp->next;
		
	}
	return sum;
}

//Node* midOfNodeinLL(Node *head)
//{
//	if(head==NULL) return NULL;
//	Node *temp=head;
//	int Length=countNodesinLLR(head);
//	int count=0;
//	while(count<(Length/2) && temp!=NULL)
//	{
//		temp=temp->next;
//		count++;
//	}
//	return temp;
//}


//Case 1 of mid when mid is second element.Count goes till (Length/2).Two traversal needed 
Node* midOfNodeinLLCaseOne(Node *head)
{
	if(head==NULL) return NULL;
	Node *temp=head;
	int Length=countNodesinLLR(head);
	int count=0;
	while(count<(Length/2) && temp!=NULL)
	{
		temp=temp->next;
		count++;
	}
	return temp;
}
//Case 2 of mid when mid is first  element.Two traversal needed 
Node* midOfNodeinLLCaseTwo(Node *head)
{
	if(head==NULL) return NULL;
	Node *temp=head;
	int Length=countNodesinLLR(head);
	int count=0;
	while(count<((Length/2)-1) && temp!=NULL)
	{
		temp=temp->next;
		count++;
	}
	return temp;
}

//Generic Case to get 10 as mid element as per linked list taken
Node* midUsingSlowFastPointerCaseOne(Node *head)
{
	if(head==NULL) return 0;
	Node *slow=head;
	Node *fast=head;
	while(fast!=NULL && fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
		
	}
	return slow;
}
//Case to get 9 as mid element as per linked list taken
Node* midUsingSlowFastPointerCaseTwo(Node *head)
{
	if(head==NULL) return 0;
	Node *slow=head;
	Node *fast=head;
	while(fast!=NULL && fast->next!=NULL)
	{
	    
		slow=slow->next;
		fast=fast->next->next;
		if(fast->next->next==NULL)  //As soon as fast->next->next==NULL At this time slow points to first mid element of LL.So break loop return slow pointer
		{
		    break;
		}
		
		
	}
	return slow;
}

int maxElementInSLLI(Node *head)
{
	if(head==NULL) return 0;
	Node *temp=head;
	int max=INT_MIN;
	while(temp!=NULL)
	{
		if(temp->data>max)
		{
			max=temp->data;
		}
		temp=temp->next;
	}
	return max;
}
int maxElementInSLLR(Node *head)
{
	if(head==NULL) return 0;
	Node *temp=head;
	int max=INT_MIN;
	if(temp!=NULL)
	{
		max=maxElementInSLLR(temp->next);
		return max>temp->data?max:temp->data;
	}
	
}

Node* SearchInInSLLGenericI(Node *head,int key)
{
	if(head==NULL) return 0;
	Node *temp=head;
    while(temp!=NULL)
	{
		if(temp->data==key)
		{
			return temp;
		}
		temp=temp->next;
	}
	
}

Node* SearchInInSLLGenericR(Node *head,int key)
{
	if(head==NULL) return 0;
	Node *temp=head;
    if(temp!=NULL)
	{
		if(temp->data==key)
		{
			return temp;
		}
		return SearchInInSLLGenericR(temp->next,key);
	}
	
}
//Apply Linear Search Using Move To Front Technique
Node* SearchInInSLLMoveToFrontI(Node *head,int key)
{
	if(head==NULL) return NULL;
	Node *temp=head;
	Node *tail=NULL;
    while(temp!=NULL)
	{
		if(temp->data==key)
		{
			tail->next=temp->next;
			temp->next=head;
			head=temp;
			
			return temp;
		}
		tail=temp;
		temp=temp->next;
		
		
	}
	
}

//Merging Two Sorted LL
Node* MergeTwoSortedSLL(Node *head1,Node *head2)
{
	if(head1==NULL)
	return NULL;
	
	if(head2==NULL)
	return NULL;
	if(head1==NULL&&head2==NULL)
	return head1;
	
	Node *first=head1;
	Node *second=head2;
	Node *third=NULL;  //Points to first element of Merged LL.
	Node *last=NULL;   //Points to last element of merged LL.Initially first=last=third
	
	//For First Node of Merged LL
	if(first->data<second->data)
	{
		third=last=first;
		first=first->next;
		last->next=NULL;
	}
	else
	{
		third=last=second;
		second=second->next;
		last->next=NULL;
	}
	
	//For other Nodes
	while(first!=NULL&&second!=NULL)
	{
	if(first->data<second->data)
	{
		last->next=first;
		last=first;
		first=first->next;
		last->next=NULL;
	}
	
	else
	{
		last->next=second;
		last=second;
		second=second->next;
		last->next=NULL;
		
	}
		
	}
	
	if(second!=NULL)
	{
		last->next=second;
		
	}
	if(first!=NULL)
	{
        last->next=first;
		
	}
	
	return third;

}

//Apply MergeSort on SLL
//Node* mergeSortLL(Node *head)
//{
//	if(head==NULL||head->next==NULL)
//	return head;
//	
//	Node *mid=midUsingSlowFastPointerCaseOne(head);
//	Node *firstHalf=head;
//	Node *secondHalf=mid->next;
//	mid->next=NULL;
//	 firstHalf=mergeSortLL(firstHalf);
//     secondHalf=mergeSortLL(secondHalf);
//	Node* finalHead=MergeTwoSortedSLL(firstHalf,secondHalf);
//	
//	return finalHead;
//	
//}

bool checkLLSortedUnSorted(Node *head)
{
	Node *temp=head;
	int x=INT_MIN;
	while(temp!=NULL)
	{
		if(temp->data<x)
		{
			return false;
		}
		x=temp->data;
		temp=temp->next;
	}
	return true;
}




//Program to Reverse a linked List(Iterative)
Node* ReverseLLI(Node *head)
{
	Node *p=head;
	Node *q=NULL;
	Node *r=NULL;
	while(p!=NULL)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	head=q;
	
	return head;
}


//Program to Reverse a linked List(Recurrsive)
//Node* ReverseLLR(Node *head,Node *p,Node *q)
//{
//
//	
//	if(p!=NULL)
//	{
//		ReverseLLI(p->next,p);
//		p->next=q;  //Returning phase of recurrsion
//		
//	}
//	else
//	{
//		head=q;
//	}
//	
//	return head;
//}





int main()
{
//Statically Created node object
//	Node n1(1);
//	Node *head=&n1;
//	Node n2(2);
//	n1.next=&n2;
//	n2.next=NULL;

//Dynamic Creation of Node

Node *head=new Node(7);
Node *second=new Node(11);
Node *third=new Node(41);
Node *forth=new Node(66);

//Link First and Second Node
head->next=second;

//Link Second to Third Node
second->next=third;

//Link Third to forth Node
third->next=forth;

//Terminate list at forth Node
forth->next=NULL;

printLL(head);
cout<<endl;
head=InsertAtBeginning(head,56); //New Head after inserting element at beginning
printLL(head); 
cout<<endl;
head=InsertAtGivenIndex(head,12,3);
printLL(head); 
cout<<endl;
head=InsertAtEnd(head,67);
printLL(head);
cout<<endl;
head=InsertAfterANode(head,second,8);
printLL(head);
cout<<endl;
head=InsertAfterANode(head,third,42);
printLL(head);
cout<<endl;
int n=countNodesinLLR(head);
cout<<"The Number of Nodes in Linked List are "<<n<<endl;
printLL(head);
cout<<endl;
int sum=sumOfNodesinLLR(head);
cout<<"The Sum of Nodes in Linked List are "<<sum<<endl;
printLL(head);
cout<<endl;
int summ=sumOfNodesinLLI(head);
cout<<"The Sum of Nodes in Linked List are "<<summ<<endl;
Node *mid=midOfNodeinLLCaseOne(head);
cout<<"The Middle of Nodes in Linked List are "<<mid->data<<endl;


cout<<endl<<endl;
Node *pehla=new Node(8);
Node *dusrae=new Node(6);
Node *teesrae=new Node(3);
Node *chautha=new Node(9);
Node *panchwa=new Node(10);
Node *chatha=new Node(4);
Node *satwa=new Node(2);
Node *athwa=new Node(12);
pehla->next=dusrae;
dusrae->next=teesrae;
teesrae->next=chautha;
chautha->next=panchwa;
panchwa->next=chatha;
chatha->next=satwa;
satwa->next=athwa;
athwa->next=NULL;
printLL(pehla);
cout<<endl;
cout<<endl;
int num=countNodesinLLR(pehla);
cout<<"The Number of Nodes in Linked List are "<<num<<endl;
Node *midd=midOfNodeinLLCaseOne(pehla);
cout<<"The Middle of Nodes in Linked List for case 1:For Even Number of Nodes "<<midd->data<<endl;
Node *middd=midOfNodeinLLCaseTwo(pehla);
cout<<"The Middle of Nodes in Linked List for case 2:For Even Number of Nodes "<<middd->data<<endl<<endl;
Node *midddd=midUsingSlowFastPointerCaseOne(pehla);
cout<<"The Middle of Nodes in Linked List for case 1:For Even Number of Nodes "<<midddd->data<<endl<<endl;
Node *middddd=midUsingSlowFastPointerCaseTwo(pehla);
cout<<"The Middle of Nodes in Linked List for case 2:For Even Number of Nodes "<<middddd->data<<endl<<endl;
int maximum=maxElementInSLLI(pehla);
cout<<"The Max of all Nodes in Linked List "<<maximum<<endl<<endl;
int max=maxElementInSLLR(pehla);
cout<<"The Max of all Nodes in Linked List "<<max<<endl<<endl;


int key;
cout<<"Please Enter Key you would Like to Search For"<<endl;
cin>>key;
Node* keyNode=SearchInInSLLGenericI(pehla,key);
if(keyNode==NULL)
cout<<"The Key not found in Linked List "<<endl<<endl;
else
cout<<"The Key "<<keyNode->data<<" is found in Linked List successfully "<<endl<<endl;
cout<<endl<<endl<<"Search By Recursive Method "<<endl;

int key_1;
cout<<"Please Enter Key you would Like to Search For"<<endl;
cin>>key_1;
Node* keyNodee=SearchInInSLLGenericR(pehla,key_1);
if(keyNodee==NULL)
cout<<"The Key not found in Linked List "<<endl<<endl;
else
cout<<"The Key "<<keyNodee->data<<" is found in Linked List successfully "<<endl<<endl;


//Improved Linear Search in Linked List using Move to front
cout<<endl<<endl<<"Search By Iterative using Move to Front Method Technique to Reduce Comparisions "<<endl;

int key_11;
cout<<"Please Enter Key you would Like to Search For"<<endl;
cin>>key_11;
Node* keyNodeee=SearchInInSLLMoveToFrontI(pehla,key_11);
if(keyNodeee==NULL)
cout<<"The Key not found in Linked List "<<endl<<endl;
else
cout<<"The Key "<<keyNodeee->data<<" is found in Linked List successfully "<<endl<<endl;
printLL(keyNodeee);

cout<<endl<<endl<<endl;

//Merge two sorted LL
Node *first=new Node(4);
Node *two=new Node(8);
Node *three=new Node(10);
Node *four=new Node(15);
Node *secondd=new Node(2);
Node *five=new Node(7);
Node *six=new Node(12);
Node *seven=new Node(14);

first->next=two;
two->next=three;
three->next=four;
four->next=NULL;
secondd->next=five;
five->next=six;
six->next=seven;
seven->next=NULL;

printLL(first);
cout<<endl;
printLL(secondd);
cout<<endl;cout<<endl;
Node *new_head=MergeTwoSortedSLL(first,secondd);
cout<<("The Merged LL is ")<<endl<<endl;
printLL(new_head);


//Apply merge Sort on LL
//MergeSortOnLL



//Check if LL is sorted or not
cout<<endl;
bool a=checkLLSortedUnSorted(new_head);
bool b=checkLLSortedUnSorted(pehla);
cout<<"The Linked List is "<<a<<endl;
cout<<"The Linked List is "<<b<<endl;
cout<<"The Linked List is "<<checkLLSortedUnSorted(first)<<endl;
cout<<"The Linked List is "<<checkLLSortedUnSorted(secondd)<<endl;









//Program to reverse Linkedlist
cout<<endl;
printLL(pehla);
cout<<endl<<"Reversed LL"<<endl;
Node *neww=ReverseLLI(pehla);
printLL(neww);




//Program to reverse Linkedlist groupwise






//Detect a cycle or loop in LL





//Delete Duplicates from Linked List(Sorted and Unsorted)




//Reverse a LL(Iterative)




//Reverse a LL(Recurrsive)






//check LL is palindromic or not






//Even after odd LL






//Swap two nodes of LL





//Append last n to first





//Reverse printing of LL




//Remove Nth node from End of LL




//Add two Numbers given as LL



//Intersection Point of two linked list




//Find startingpoit of cycle




//Flattening of LL




//Rotation of LL




//Clone a LL





//Odd Even Linked List

}

