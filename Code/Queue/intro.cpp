#include<iostream>
using namespace std;

class Queue{
    public:

    int* arr;
    int qfront;
    int rear;
    int size;

    Queue(int Size){
        this -> size = Size;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    void enqueue(int data){
        if(rear == size){
            cout<<"The Queue is Full! "<<endl;
        }else{
            arr[rear] = data;
            rear++;
        }
        
    }

    void dequeue(){
        if(qfront == rear){
            cout<<"Queue is empty!!!"<<endl;
        }
        cout<<arr[qfront]<<endl;
        qfront++;
        if(qfront == rear){
            qfront = 0;
            rear = 0;
        }
    }

    void isempty(){
        if(qfront == rear){
            cout<<"The queue is empty!"<<endl;
        }
        else{
            cout<<"The queue is not empty!"<<endl;
        }
    }

    void front(){
        if(qfront == rear){
            cout<<"Queue is empty!"<<endl;
        }
        else{
            cout<<arr[qfront]<<endl;
        }
    }

    void display(){
        while(qfront != rear){
            cout<<arr[qfront]<<" ";
            qfront++;
        }
        cout<<endl;
    }

};

int main(){

    Queue q(10);
    for(int i=0;i<10;i++){
        q.enqueue(i);
    }
    q.isempty();
    q.display();
    return 0;
}