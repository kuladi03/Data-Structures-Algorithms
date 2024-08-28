#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this -> data = d;
    }
};

void BuildTree(Node* &root , vector<int> &v){
    queue<Node*> q;
    int i = 0;
    if(v[i] != -1){
        root -> data = v[i];
        q.push(root);
    }    

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        i++;
        if(v[i] != -1){
            temp -> left = new Node(v[i]);
            q.push(temp -> left);
        }

        i++;
        if(v[i] != -1){
            temp -> right = new Node(v[i]);
            q.push(temp -> right);
        }

    }
}

int main(){
    Node* root;
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    BuildTree(root,v);
    return 0;
}