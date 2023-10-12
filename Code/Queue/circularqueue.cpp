#include<iostream>
using namespace std;

class Queue{
    public:

    int* arr;
    int qfront;
    int rear;
    int size;

    Queue(int s){
        qfront = rear = -1;
        this -> size = s;
        arr = new int[size];
    }

    void enqueue(int element){
        if((qfront == 0 && rear == size -1) || (rear == (qfront - 1) % (size-1))){
            cout<<"Queue is Full"<<endl;
            return;
        }
        else if(qfront==-1){
            qfront = rear = 0;
            arr[rear] = element;
        }
        else{
            if(qfront != 0 && rear == size - 1 ){
                rear = 0;
                arr[rear] = element;
            }
            else{
                rear++;
                arr[rear] = element;
            }
        }
    }

    void dequeue(){
        if(qfront == -1){
            cout<<"queue is empty"<<endl;
            return;
        }
        else if(qfront == rear){
            cout<<arr[qfront]<<endl;
            qfront = rear = -1;
        }
        else if(qfront == size -1){
            cout<<arr[qfront]<<endl;
            qfront = 0;
        }
        else{
            cout<<arr[qfront]<<endl;
            qfront++;
        }
    }
    void isempty(){
        if(qfront == rear == -1){
            cout<<"Queue is empty!"<<endl;
        }
        else{
            cout<<"Queue is not empty!"<<endl;
        }
    }

    void front(){
        if(qfront == -1){
            cout<<"Queue is empty!"<<endl;
            return;
        }else{
            cout<<arr[qfront]<<endl;
        }
    }

    void display() {
        int i = qfront;
        int count = 0;

        if (qfront == -1) {
            cout << "Queue is empty!" << endl;
            return;
        }

        while (count < size) {
            cout << arr[i] << " ";
            i = (i + 1) % size;
            count++;
        }

        cout << endl;
    }

};

int main(){

    Queue q(10);
    for(int i = 0 ; i < 10 ; i++){
        q.enqueue(i+1);
    }
    q.display();
    q.dequeue();
    q.front();
    return 0;
}