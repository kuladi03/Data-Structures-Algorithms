#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* left;
    Node* right;

    Node(int value){
        this -> data = value;
        left = NULL;
        right = NULL;
    }

};

int main(){

    Node* root = NULL;
    buildtree(root);
    
    return 0;
}