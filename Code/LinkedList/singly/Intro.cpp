#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};

void insert(Node* &head , int d){
    Node* newNode = new Node(d);
    if(head == NULL){
        head = newNode;
        return ;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp -> next;
    }
    temp -> next = newNode;
}

void display(Node* head){
    if(head == NULL){
        return ;
    }
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

void todelete(Node* &head , int d){
    if(head == NULL){
        return ;
    }
    if(head -> data == d){
        Node* todelete = head;
        head = head -> next;
        delete todelete;
        return;
    }
    Node* temp = head;
    while(temp -> next -> data != d){
        temp = temp -> next;
    }
    Node* todelete = temp -> next;
    temp -> next = todelete -> next;
}

void reverse(Node* &head){
    if(head == NULL){
        return ;
    }
    Node* currptr = head;
    Node* prevptr = NULL;
    Node* nextptr;

    while(currptr != NULL){
        nextptr = currptr -> next;
        currptr -> next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    head = prevptr;
}

int main(){
    Node* head = NULL;
    insert(head , 10);
    insert(head , 5);
    insert(head , 1);
    insert(head , 6);
    display(head);
    todelete(head , 10);
    display(head);
    reverse(head);
    display(head);
    return 0;
}