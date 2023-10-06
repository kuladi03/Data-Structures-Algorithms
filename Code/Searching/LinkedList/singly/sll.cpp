#include<iostream>
using namespace std;

class Node{
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
void Delete(Node* &head)
{

}


int main(){
    Node* head = NULL;
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    insert(head, 6);
    insert(head, 7);
    display(head);
    return 0;
}