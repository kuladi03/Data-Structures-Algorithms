#include<bits/stdc++.h>
using namespace std;

vector<int> bfsofGraph(int& v , vector<int> adj[]){
    int visited[v] = {0};
    visited[0] = 1;
    queue<int> q;
    q.push(0);
    vector<int> bfs;
    while(!q.empty()){
        int node = q.front();
        q.pop();

        bfs.push_back(node);

        for(auto it : adj[node]){
            if(!visited[it]){
                visited[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
}

int main(){
    int v;
    cin>>v;
    vector<int> adj[v+1];
    vector<int> ans = bfsofGraph(v,adj);
    return 0;
}