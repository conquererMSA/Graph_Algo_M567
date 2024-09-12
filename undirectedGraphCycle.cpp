#include<bits/stdc++.h>
using namespace std;
vector<int> adj[20];
int visitiedNodes[20];
int pathTrack[20];
int main(){
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    for(int i=0; i<n; i++){
        
    }
    return 0;
}