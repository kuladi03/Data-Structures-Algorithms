#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
    }
};

void insertAtHead(Node* &head , int d){
    Node* newNode = new Node(d);
    newNode -> next = head;
    head = newNode;
    return ;
}

void insertAtTail(Node* &head , int d){
    Node* newNode = new Node(d);
    if(head == NULL){
        insertAtHead(head , d);
        return ;
    }
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newNode;
    newNode -> prev = temp;
}

void display(Node* &head){
    if(head == NULL){
        return ;
    }
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data <<"->";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

void toDelete(Node* &head , int d){
    if(head == NULL){
        return ;
    }
    Node* temp = head;
    while(temp -> next -> data != d){
        temp = temp -> next;
    }
    Node* todelete = temp -> next;
    temp -> next = todelete -> next;
    todelete -> next -> prev = todelete -> prev;
    delete todelete;
}

int main(){
    Node* head = NULL;
    insertAtTail(head , 10);
    insertAtTail(head , 65);
    insertAtTail(head , 11);
    insertAtTail(head , 59);
    insertAtHead(head , 98);
    toDelete(head , 11);
    display(head);
    return 0;
}