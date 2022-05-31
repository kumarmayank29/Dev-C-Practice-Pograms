//Common Questions
/*
1 Linked List is a Linear Data Structure in which nodes are not stored in contiguous location but they are linked with pointer
  to provide sequential access feel
2 Practical Applications of Linked List includes 1)Image Viewer 2)Web Browser 3)Music Player 
                                                 4)Acts as a base to implement complex data structures like styack,queue,graph and heap
                                                 5)Dynamic Memory Allocation
*/

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
/* 
1              2          3          4                 5
s,f
1              2          3          4                 5
			   s          f
			   
1              2          3          4                 5 ,NULL
                          s                            f(stop)
						  			   
SO FOR ODD NUMBER OF ELEMENTS fast->next!=NULL condition is valid and Location of s is middle of Linked List
						  			   

1              2          3          4                 5                 6
s,f

1              2          3          4                 5                 6
               s          f
               
1              2          3          4                 5                 6
                          s                           f    

1              2          3          4                 5                 6
                                     s                                   f 

1              2          3          4                 5                 6
                                                       s                                   f 									 						             


*/
int MiddleOfLinkedList(Node *head) 
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

 



	
}
                             
