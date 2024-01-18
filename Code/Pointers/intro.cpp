#include<iostream>
using namespace std;

int main(){

    int a = 5;
    int *b = &a;

    cout<<"Value of a : "<<a<<endl;
    cout<<"Value of a : "<<*(&a)<<endl;
    cout<<"Value of a : "<<*b<<endl;
    cout<<"Address of a : "<<&a<<endl;
    cout<<"address of a & value of b : "<<b<<endl;
    cout<<"address of b : "<<&b<<endl;
    return 0;
}