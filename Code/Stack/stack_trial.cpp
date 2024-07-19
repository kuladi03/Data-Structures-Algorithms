#include<iostream>
using namespace std;

class Stack{
    int *arr;
    int top;
    int size;

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
};

int main(){

    return 0;
}