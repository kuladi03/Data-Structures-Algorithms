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

int main(){

    Node* head = new Node(1);
    Node* temp = head;
    temp -> next = new Node(2);
    temp = temp -> next;
    while(head != NULL){
        cout<<head -> data<<"->";
        head = head -> next;
    }
    cout<<"NULL\n";
    return 0;
}