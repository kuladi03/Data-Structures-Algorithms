#include<iostream>
#include<queue>
using namespace std;

class Node{
    public :
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this-> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* buildTree(Node* &root){
    cout<<"Enter the data : ";
    int d;
    cin>>d;

    root = new Node(d);

    if(d == -1){
        return NULL;
    }

    cout<<"Enter the data for left of "<<d<<" ";
    root -> left = buildTree(root->left);

    cout<<"Enter the data for right of "<<d<<" ";
    root -> right = buildTree(root->right);

    return root;
}

void levelordertraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else {
            cout<<temp -> data << " ";

            if(temp -> left){
                q.push(temp -> left);
            }
            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}

void buildfromlevelOrderTraversal(Node* &root){
    cout<<"Enter the data for root : ";
    int data;
    cin>>data;
    root = new Node(data);

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cout<<"Enter the data for the left of "<<temp->data<<" : ";
        cin>>data;

        if(data != -1){
            temp -> left = new Node(data);
            q.push(temp -> left);
        }
        cout<<"Enter the data for the right "<<temp->data<<" : ";
        cin>>data;

        if(data != -1){
            temp -> right = new Node(data);
            q.push(temp -> right);
        }
    }
}

void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root -> data;
    preorder(root -> left);
    preorder(root -> right);
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

void postorder(Node* root){
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root -> data;
}

int height(Node* root){
    // code here 
    if(root == NULL){
        return 0;
    }
        
    int left = height(root -> left);
    int right = height(root -> right);
    
    int ans = max(left,right) + 1;
    return ans;
}

int main(){
    
    Node* root = NULL;
    buildfromlevelOrderTraversal(root);
    cout<<"Tree is build successfully!"<<endl;
    levelordertraversal(root);
    cout<<"Preorder : ";
    preorder(root);
    cout<<endl;
    cout<<"Inorder : ";
    inorder(root);
    cout<<endl;
    cout<<"Postorder : ";
    postorder(root);
    cout<<endl;
    cout<<"Height of tree is : "<<height(root)<<endl;
    return 0;
}