#include<iostream>
using namespace std;


class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int Size){
        top = -1;
        this -> size = Size;
        arr = new int[size];
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack is Full "<<endl;
        }
    }

    void Top(){
        if(top == -1){
            cout<<"Stack is empty! "<<endl;
        }else{
            cout<<arr[top]<<endl;   
        }
    }

    void pop(){
        if(top == -1){
            cout<<"Stack is empty!"<<endl;
        }
        else{
            top--;
        }
    }

    void display(){
        int temp = top;
        while(temp != -1){
            cout<<"---"<<endl;
            cout<<arr[temp]<<endl;
            temp--;
        }
    }
};

int main(){
    Stack st(100);
    for(int i=0;i<100;i++){
        st.push(i);
    }
    st.Top();
    // st.display();
    return 0;
}