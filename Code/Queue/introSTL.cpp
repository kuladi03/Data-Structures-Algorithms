#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> q;

    q.push(10);
    q.push(11);
    q.pop();
    cout<<q.front()<<endl;
    return 0;
}