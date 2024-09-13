#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF = 1e18+5;
int main(){
    int n,e,q;
    cin>>n>>e>>q;
    ll d2Grid[n+1][n+1];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            d2Grid[i][j]=INF;
            if(i==j) d2Grid[i][j]=0;
        }
    }
    while(e--){
        ll u,v,c;
        cin>>u>>v>>c;
        d2Grid[u][v]=min(d2Grid[u][v],c);
        d2Grid[v][u]=min(d2Grid[v][u],c);
    }
    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(d2Grid[i][k]+d2Grid[k][j]<d2Grid[i][j]){
                    d2Grid[i][j]=d2Grid[i][k]+d2Grid[k][j];
                }
            }
        }
    }
    while(q--){
        int u,v;
        cin>>u>>v;
        if(d2Grid[u][v]==INF) cout<<-1<<endl;
        else cout<<d2Grid[u][v]<<endl;
    }
    return 0;
}

/*
input
4 3 5
1 2 5
1 3 9
2 3 3
1 2
2 1
1 3
1 4
3 2

output
5
5
8
-1
3
*/