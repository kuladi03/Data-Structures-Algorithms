#include<iostream>
using namespace std;

struct Node{
    public:

    int data;
    Node* next = NULL;

    Node(int val)
    {
        this -> data = val;
        this -> next = NULL;
    }
};

void insert(Node* &head, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = newNode;
}

void display(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp -> data<<"->";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}
void Delete(Node* &head , int key)
{
    if(head == NULL)
    {
        return;
    }
    if(head -> next == NULL)
    {
        Node* todelete = head;
        head = head -> next;
        delete todelete;
        return;
    }
    Node* temp = head;
    while(temp -> next -> data != key)
    {
        temp = temp -> next;
    }
    Node* todelete = temp -> next;
    temp -> next = temp -> next -> next;
    delete todelete;
}

void reverse(Node* &head)
{
    Node* prevptr = NULL;
    Node* currptr = head;
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
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    insert(head, 6);
    insert(head, 7);
    Delete(head,5);
    // reverse(head);
    display(head);

    return 0;
}