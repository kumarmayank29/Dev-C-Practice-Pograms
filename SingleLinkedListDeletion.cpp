#include<iostream>
#include<bits/stdc++.h>
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

Node* InsertAfterANode(Node *head,Node *prevNode,int data) 
{
	Node *newnode=new Node(data);
	newnode->next=prevNode->next;
	prevNode->next=newnode;
	return head;
	
}
Node* DeleteFirstNode(Node *head) 
{
	Node *temp=head;
	head=head->next;
	temp->next=NULL;
	delete temp;
	return head;
	
}

Node* DeleteAtGivenIndex(Node *head,int index) 
{
	Node *p=head;
	Node *q=head->next; //q ko waha lao jisko delete karna hai
	int i=0;
	while(i!=index-1)
	{
		p=p->next;
		q=q->next;
		i++;
	}
	p->next=q->next;
	q->next=NULL;
	delete q;
	return head;
	
}
Node* DeleteLastNode(Node *head) 
{
	Node *p=head;
	Node *q=head->next;
	while(p!=NULL&&q->next!=NULL) //OR while(q->next!=NULL)
	{
		p=p->next;
		q=q->next;
	}
	p->next=NULL;
	delete q;
	return head;
	
}
Node* DeleteNodeWithGivenValue(Node *head,int value) 
{
	Node *p=head;
	Node *q=head->next;
	while(q->data!=value&&q->next!=NULL) 
	{
		p=p->next;
		q=q->next;
	}
	
	if(q->data==value)
	{
		p->next=q->next;
		q->next=NULL;
		delete q;
	}
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
head=DeleteFirstNode(head);
printLL(head);
cout<<endl;
head=DeleteAtGivenIndex(head,2);
printLL(head);
cout<<endl;
head=DeleteLastNode(head);
printLL(head);
cout<<endl;
head=DeleteNodeWithGivenValue(head,66);
printLL(head);
cout<<endl;


 

 



	
}

