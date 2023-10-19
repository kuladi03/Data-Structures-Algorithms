#include<iostream>
using namespace std;

class Stack{
    public:

    int *arr;
    int top;
    int size;
    
    //stack initialization
    Stack(int size){
        top = -1;
        this -> size = size;
        arr = new int[size];
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack OverFlow"<<endl;
        }
    }

    void pop(){
        if(top != -1){
            cout<<arr[top]<<endl;
            top--;
            
        }
        else{
            cout<<"Stack is Empty"<<endl;
        }
    }

    int Top(){
        int ans;
        if(top == -1){
            return -1;
        }
        else{
            ans = arr[top]; 
        }
        return ans;
    }

    bool isEmpty(){
        if(top == -1){
            return false;
        }
        else{
            return true;
        }
    }


};


int main(){

    Stack st(5);
    st.push(2);
    // cout<<st.Top();
    st.pop();
    cout<<st.isEmpty();
    return 0;
}