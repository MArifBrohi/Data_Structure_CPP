#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
	Node(int val)
	{
		data =  val;
		next= NULL;
	}

};

/* INSERTING AT HEAD*/

void InsertAtHead(Node* &head, int val)
{
	Node* n = new Node(val);
	n->next = head;
	head = n;
}
/* INSERTING AT TAIL*/

void insertAtTail(Node* &head, int val)
{
	Node* n = new Node(val);
	if(head==NULL)
	{
		head = n;
		return ;
	}
	Node* temp = head;
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	temp->next= n;
}

/* DISPLAY METHOD*/

void display(Node* head)
{
	Node* temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp = temp->next;
	
	}
		cout<<"NULL";
	cout<<endl;
}

/* SEARCHING IN LIST */

bool search(Node* head , int key)
{
	Node* temp = head;
	while(temp!=NULL)
	{
		if(temp->data == key)
		{
	 		return true;
		}
		temp = temp->next;
	}
	return false;
}


int main()
{

	
	Node* head = NULL;
	insertAtTail(head ,1);
	insertAtTail(head , 2);
	insertAtTail(head , 3);
	cout<<"Inserting at tail"<<endl;
	display(head);
	InsertAtHead(head , 5);
	cout<<"Inserting at head:"<<endl;
	display(head);
	int key;
	cout<<"Search number in list: ";
	cin>>key;
	cout<<search(head , key);

	return 0;

}
