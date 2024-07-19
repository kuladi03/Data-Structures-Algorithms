#include<iostream>
using namespace std;

class Heap{
    public:

    int arr[100];
    int size;

    Heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int ele){
        size = size + 1;
        int index = size;
        if(index > 100){
            return ;
        }
        arr[index] = ele;

        while(index > 1){
            int parent = index / 2;
            if(arr[parent] < arr[index]){
                swap(arr[parent] , arr[index]);
                index = parent;
            }
            else {
                return;
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){

    Heap h;
    h.insert(5);
    h.insert(3);
    h.insert(6);
    h.insert(4);
    h.print();

    return 0;
}