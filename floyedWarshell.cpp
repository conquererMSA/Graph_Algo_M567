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
    //path relaxation
    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(adj[i][k]+adj[j][k]<adj[i][j]){
                    adj[i][j]=adj[i][k]+adj[j][k]
                }
    }
        
    }
    }
    //cycle detection;
    //adjMatrix er primary diagonal cell er kuno ekti cell er value zodi 0 theke chuto hoy tahole graph e cycle ache.
    for(int i=0; i<n; i++){
        //adj[i][i] primary diagonal cell;
        if(adj[i][i]<0){
            cout<<"cycle detected"<<endl;
        }
    }
    return 0;
}