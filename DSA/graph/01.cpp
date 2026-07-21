#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"Enter the number of vertices: "<<endl;
    cin>>n;
    cout<<"Enter the number of edges: "<<endl;
    cin>>m;
    unordered_map<int, list<int>> adjlist;
    cout<<"Enter the edges (u,v) : " <<endl;
    for(int i=0;i<m;i++){
        int  u , v;
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    cout<< " adj list is :"<< endl;
    for(auto i :  adjlist){
        cout<< i.first << " -> ";
        for(auto j : i.second){
            cout<< j << " "; 
        }
        cout<<endl;
    }
}