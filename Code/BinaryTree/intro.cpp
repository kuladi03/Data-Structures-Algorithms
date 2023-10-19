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
Node* buildtree(Node* root){
        int data;
        cout<<"Enter the data : "<<endl;
        cin>>data;

        if(data == -1){
            return root;
        }
        cout<<"Enter the data of left "<<data<<endl;
        root->left = buildtree(root->left);
        cout<<"Enter the data of right "<<data<<endl;
        root->right = buildtree(root->right);

        return root;
    }

int main(){

    Node* root = NULL;
    buildtree(root);
    
    return 0;
}