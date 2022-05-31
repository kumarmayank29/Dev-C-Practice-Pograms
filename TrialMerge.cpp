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
		first=first->next;
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

Node* mergeSortLL(Node *head)
{
	if(head==NULL||head->next==NULL)
	return head;
	
	Node *mid=midUsingSlowFastPointerCaseOne(head);
	Node *firstHalf=head;
	Node *secondHalf=mid->next;
	mid->next=NULL;
	 firstHalf=mergeSortLL(firstHalf);
     secondHalf=mergeSortLL(secondHalf);
	Node* finalHead=MergeTwoSortedSLL(firstHalf,secondHalf);
	
	return finalHead;
	
}


int main()
{
   Node *head=new Node(66);
Node *second=new Node(11);
Node *third=new Node(7);
Node *forth=new Node(108);

//Link First and Second Node
head->next=second;

//Link Second to Third Node
second->next=third;

//Link Third to forth Node
third->next=forth;

//Terminate list at forth Node
forth->next=NULL;

printLL(head);

Node *new_head_1=mergeSortLL(head);
printLL(new_head_1);
}
