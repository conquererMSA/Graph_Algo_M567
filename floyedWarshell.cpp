#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e;
    cin>>n>>e;
    long long int adj[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            adj[i][j]=INT_MAX;
            if(i==j) adj[i][j]=0;
        }
    }
    while(e--){
        int u,v,c;
        cin>>u>>v>>c;
        adj[u][v]=c;
    }
    return 0;
}