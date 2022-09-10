#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* Next;

};
void PrintList(Node* n){
    while(n!=NULL){
    cout<<n->value<<endl;
    n = n->Next;
    }
}
void InsertAtFront(Node**head, int newValue){

        //1.prepare a new Node
    Node* newNode = new Node();
    newNode->value = newValue;
        //2. put it in front of current node
        newNode->Next = *head;
        //3. move head of the list to point out to newnode
        *head = newNode;

}
void InsertAtEnd(Node**head, int newValue){
    //1.Prepare a new Node
    Node* newNode = new Node();
    newNode->value = newValue;
    newNode->Next = NULL;
    //2.if Linked list is empty, NewNode will be head of list
    if(*head==NULL){
        *head = newNode;
        return;
    }
    //3.Find the last node
    Node* last = *head;
    while(last->Next==NULL){
        last = last->Next;
    }

    //4.Insert newNode at the last node( at the end)
    last->Next = newNode;
}
int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third =  new Node();

    head->value = 1;
    head->Next = second;
    second->value = 2;
    second->Next = third;
    third->value = 3;
    third->Next = NULL;
    
    InsertAtFront(&head, -1);
       PrintList(head);
   InsertAtEnd(&head,4);
 
   
   
}
