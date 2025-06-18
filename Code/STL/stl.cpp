#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int , int> p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int , pair<int,int>> q = {1,{2,3}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;

    pair<int , int> arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[1].first<<endl;
}

void explainVector(){   // uses singly linked list
    vector<int> v;

    v.push_back(1); // inserts value to end of array
    v.emplace_back(2); // dynamically increases size and inserts into end faster than push_back

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2); 

    // vector<int> v(5,100);   // pushes 100 5 times
    // vector<int> v(5); // pushes 0 / garbage value 5 times

    vector<int> v1(5,20);
    vector<int> v2(v1); // copy of vector

    cout<<v2[0]<<" "<<v2[3]<<endl;

    vector<int>::iterator it = v.begin();
    cout<<*it<<endl;

    it++;
    cout<<*it<<endl;
    // v = {1,2,3,4,5}

    // vector<int>::iterator it = v.end();
    // vector<int>::iterator it = v.rend();    // {5,4,3,2,1 *it starts from here and goes to 5 as we do ++}
    // vector<int>::iterator it = v.rbegin();

    cout<<v[0]<<" "<<v.at(0)<<" ";

    cout<<v.back()<<" \n";

    for(vector<int>::iterator it = v.begin() ; it != v.end() ; it++){
        cout<<*it<<" ";
    }

    for(auto it = v.begin() ; it != v.end() ; it++){
        cout<<*it<<" ";
    }

    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
    // erase function 

    v.erase(v.begin()); // for single element
    v.erase(v.begin() , v.end());   //for range (start , end)

    // vector<int> v(2,100);
    v.insert(v.begin(),300);    //(position , element)
    v.insert(v.begin()+1,2,5);  //(position , frequency , element)

    vector<int> copy(2,50);
    v.insert(v.begin() , copy.begin() , copy.end());

    cout<<v.size()<<endl; // displays size
    v.pop_back(); // pops the last element 

    v1.swap(v2);    //swaps both the vectors 
    v.clear();  // deletes all the elements from vector 
    cout<<v.empty();  //checks if vector is empty or not 

}

void explainList(){ // Uses doubly linked list
    // similar to vector just front functions are more 
    list<int> ls;

    ls.push_front(1);
    ls.emplace_front(0);

    // rest functions are same as of vector 
}

void explainDeque(){
    deque<int> dq;
    // Everything is same as list
}

void explainStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    cout<<st.top()<<endl;
    st.emplace(3);
    cout<<st.top()<<endl;

    st.pop();
    cout<<st.top()<<endl;

}

void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    cout<<q.front()<<" ";
    q.back() += 3;
    cout<<q.back()<<" ";
    q.pop();
    cout<<q.front();
}

void explainPQ(){

    // This is called as max heap as the queue stores elements in decreasing order 
    priority_queue<int> pq;
    pq.push(2);
    pq.push(5);
    pq.push(10);
    pq.push(88);
    cout<<pq.top()<<" ";

    pq.pop();
    cout<<pq.top()<<" ";

    // Now for min heap we need to change the syntax as follows
    priority_queue<int , vector<int> , greater<int>> Mpq;
    Mpq.push(10);
    Mpq.push(15);
    Mpq.push(2);
    Mpq.emplace(0);

    cout<<Mpq.top()<<" ";
    Mpq.pop();
    cout<<Mpq.top()<<" ";
}

void explainSet(){
    //  Everything is in sorted order and every element is unique
    set<int> s;
    s.insert(1);
    s.insert(24);
    s.insert(45);
    s.insert(20);
    s.insert(24);

    //  all the vectors functions are applicable 

    auto it = s.find(45);

    s.erase(24);
    cout<<s.count(20)<<" ";
}

void explainMultiset(){
    //  everything is same as set it's just that it does not store unique elements it can store multiple frequency of elements
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    cout<<ms.count(1)<<" ";
    ms.erase(1);
    cout<<ms.count(1)<<" "<<endl;
}

void explainUset(){
    // stores unique elements but not ordered, lower / upper bound functions don't work rest everything is same as set
    unordered_set<int> us;

}

void explainMap(){
    map<int,int> mpp;
    // map<int , pair <int , int>> mpp;
    // map<pair<int,int>,int> mpp;

    mpp[1] = 2;
    mpp.emplace(3,1);
    mpp.insert({2,4});
    mpp[4] = 10;

    for(auto it : mpp){
        cout<<it.first<<" "<<it.second<<endl;
    } 
}

void explainMultimap(){
    // everything is same as map it's just that the keys can only store multiple values 
    // single keys are not allowed 
}

void explainUnorderedMap(){
    //  same as difference between set and unordered_set 
}

int main(){
 
    explainPair();
    explainVector();
    explainList();
    explainStack();
    explainQueue();
    explainDeque();
    explainPQ();
    explainSet();
    explainMultiset();
    explainMap();
    return 0;
}