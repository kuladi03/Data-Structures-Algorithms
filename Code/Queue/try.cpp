#include<iostream>
using namespace std;

class Queue{
    public:
    int size , front , rear ;
    int* arr;

    Queue(int s){
        this->size = s;
        arr = new int[size];
        front = rear = -1;
    }

    bool isEmpty(){
        if(front == -1){
            return true;
        }
        else {
            return false;
        }
    }

    void enqueue(int d){
        if(isEmpty()){
            front = rear = 0;
            arr[rear] = d;
        } else if(rear <= (size - 1)){
            rear++;
            arr[rear] = d;
        } else {
            cout<<"Queue is Full";
        }
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is Empty";
        }
        else {
            front++;
        }
    }

    void Front(){
        if(isEmpty()){
            cout<<"Queue is Empty";
        }
        else {
            cout<<arr[front];
        }
    }
};

int main(){
    Queue  q(5);
    q.enqueue(12);
    q.enqueue(65);
    q.enqueue(848);
    q.enqueue(2);
    q.enqueue(0);
    q.Front();
    q.dequeue();
    q.Front();
    return 0;
}