#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int val){
        this -> data = val;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

void insertAthead(Node* &head , int val){
    Node* newNode = new Node(val);
    newNode -> next = head;
    if(head!=NULL){
        head -> prev = newNode;
    }
    head = newNode;
    return;
}

void insertAttail(Node* &head , int val){

    if(head == NULL){
        insertAthead(head, val);
        return;
    }
    Node* newNode = new Node(val);
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newNode;
    newNode -> prev = temp;
}

void Delete(Node* &head, int key){
    Node* temp = head;
    while(temp -> data != key){
        temp = temp -> next;
    }
    Node* todelete = temp;
    if(todelete == head){
        head = temp -> next;
        head -> prev = NULL;
        return;
    }
    temp -> prev -> next = temp -> next;
    temp -> next -> prev = temp -> prev;
    delete todelete;
}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<"->";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node* head = NULL;
    insertAttail(head,10);
    insertAttail(head,5);
    insertAttail(head,8);
    insertAttail(head,15);
    insertAthead(head,0);
    Delete(head,0);
    display(head);
    return 0;
}