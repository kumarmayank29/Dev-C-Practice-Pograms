#include<iostream>
#include<bits/stdc++.h>
#include <limits>
using namespace std;

//Cycle Creation ,Detect a Loop ,Find Start Position Of Loop ,Removing the loop ,redetect to No cycle cycle
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
Node* makeCycle(Node* pehla,int pos)
{
	Node *temp=pehla;
	Node *startNode;
	int count=1;
	while(temp->next!=NULL)
	{
		if(pos==count)
		{
			startNode=temp;
		}
		temp=temp->next;
		count++;
		
	}
	temp->next=startNode;
	return pehla;
	
}
bool detectCycle(Node *head)
{
	Node* slow=head;
	Node* fast=head;
	while(fast!=NULL&&fast->next->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{
			return 1;
		}
	}
	return 0;
	
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
Node* removeCycle(Node* head)
{
	bool k=detectCycle(head);
	if(k)
	{
		Node *slow=head;
	    Node *fast=head;
	
	   do{
		     slow=slow->next;
		     fast=fast->next->next;
	     }while(slow!=fast);
	     fast=head;
	     while(fast->next!=slow->next)
	     {
	     	slow=slow->next;
	     	fast=fast->next;
	     	
		 }
		 slow->next=NULL;
		 
		 return head;
	
		
	}
	else
	{
		return NULL;
	}
	
	

}

int StartingPositionOfCycle(Node *head)
{
		Node *slow=head;
	    Node *fast=head;
	    int count=1;
	
	   do{
		     slow=slow->next;
		     fast=fast->next->next;
	     }while(slow!=fast);
	     fast=head;
	     while(fast->next!=slow->next)
	     {
	     	slow=slow->next;
	     	fast=fast->next;
	     	count++;
	     	
		 }
		 return count+1;
		 
		 
	
}


int main()
{
	
	
cout<<endl<<endl;
Node *pehla=new Node(1);
Node *dusrae=new Node(2);
Node *teesrae=new Node(3);
Node *chautha=new Node(4);
Node *panchwa=new Node(5);
Node *chatha=new Node(6);
Node *satwa=new Node(7);
Node *athwa=new Node(8);
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
int pos;
cout<<"Enter the Position from where you want to start your cycle"<<endl;
cin>>pos;
if(pos>countNodesinLLR(pehla))
{
	cout<<"Sorry This is an Invalid Position";
	return 0;
}
Node *neww=makeCycle(pehla,pos);
//printLL(neww);
bool K=detectCycle(neww);
int positionofcycle=StartingPositionOfCycle(neww);
K==true?cout<<"Yes There is a Cycle present\n":cout<<"No there is no cycle\n";
cout<<"Starting Position of Cycle "<<positionofcycle;
Node *newww=removeCycle(neww);
newww==NULL?cout<<"There is no cycle":cout<<"\nCycle removed successfully\n";
bool F=detectCycle(newww);
F==true?cout<<"\nYes There is a Cycle":cout<<"\nNo there is no cycle\n";
printLL(newww);
}
