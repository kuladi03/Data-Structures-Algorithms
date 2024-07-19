#include<iostream>
using namespace std;

void print(int &count){
    //base condition , it stops the recursion 
    if(count > 10){
        return ;
    }
    cout<<count<<endl;
    count++;
    print(count);
}

int main(){
    int count = 0;
    print(count);
    return 0;
}