#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int *b = &a;
    int **c = &b;

    cout<<"Value of a : "<<a<<endl;
    cout<<"Value of a : "<<*(&a)<<endl;
    cout<<"Value of a : "<<*b<<endl;
    cout<<"Value of a : "<<**c<<endl;

    cout<<"value of b : "<<b<<endl;
    cout<<"value of b : "<<&a<<endl;
    cout<<"value of b : "<<*c<<endl;

    cout<<"value of c : "<<c<<endl;
    cout<<"value of c : "<<&b<<endl;
    return 0;
}