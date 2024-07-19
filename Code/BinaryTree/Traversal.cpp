#include<iostream>
using namespace std;

class Node{

    public:

    int data;
    Node* left;
    Node* right;

    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* buildTree(Node* &root){
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;

    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Left child of : " << root->data << " : ";
    root -> left = buildTree(root -> left);
    cout<<"Right child of : "<< root -> data <<" : ";
    root -> right = buildTree(root -> right);

    return root;
}

void inorder(Node* root){
    if(root == NULL){
        return ;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    if(root == NULL){
        return ;
    }

    cout<< root -> data<<" ";
    preorder(root -> left);
    preorder(root -> right);
}

void postorder(Node* root){
    if(root == NULL){
        return ;
    }
    postorder(root -> left);
    postorder(root -> right);
    cout<<root -> data<<" ";
}

int main(){

    Node* root = NULL;
    //6 2 1 -1 -1 4 3 -1 -1 5 -1 -1 7 -1 9 8 -1 -1 -1
    buildTree(root);
    cout<<"Tree build Successfully\n";
    cout<<"\nInorder Traversal => ";
    inorder(root);
    cout<<"\nPreorder Traversal => ";
    preorder(root);
    cout<<"\nPostorder Traversal => ";
    postorder(root);
    return 0;
}