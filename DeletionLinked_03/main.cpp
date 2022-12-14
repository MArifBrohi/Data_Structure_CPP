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
/* DELETE AT HEAD SO MEMORY CAN REMAIN UNLEAKED*/

void deleteAtHead(Node* &head)
{
	Node* toDelete = head;
	head = head->next;
	delete toDelete;
	
}

/*deletion at tail and in between but not at head: */
void deletetion(Node* &head , int val)
{
	Node* temp = head;
	if(head==NULL)
	{
		return ;
	}
	if(head->next==NULL)
	{
		deleteAtHead(head);
		return ;
	}

	while(temp->next->data!=val)
	{
		temp = temp->next;
	}
	Node* toDelete = temp->next;
	temp->next= temp->next->next;
	
	delete toDelete;
}
int main()
{

	
	Node* head = NULL;
	insertAtTail(head ,1);
	insertAtTail(head , 2);
	insertAtTail(head , 3);
	cout<<"Inserting at tail"<<endl;
	display(head);
	int dele;
//	cout<<"Which number to delete: ";
//	cin>>dele;
//	cout<<"After deleteion"<<endl;	
//	deletetion(head , dele);
	cout<<"Deletion At Head "<<endl;
	deleteAtHead(head);
	display(head);
	
	return 0;
}
