#include<bits/stdc++.h>
#define ll long long int;
#define pi pair<ll, ll>;
using namespace std;
ll vector<pi> edgelist[200005];
ll vis[200005];
ll par[200005];

ll vector<pi> edgelist;
void dijkstra(int src){
    priority_queue<pi, vector<pi>, greater<pi>> pq;
    pq.push({0,src});
    while(!pq.empty()){
        ll prNode=pq.front().second;
        ll prCost=pq.front().second;
        pq.pop();
        for(pi child:edgelist[prNode]){
            if(dis[prNode]+child.first<dis[child.second]){
                par[child.second]=prNode;
                dis[child.second]=dis[prNode]+child.first;
                pq.push({dis[child.first], child.second});
            }
        }
    }
}
int main(){
    int n, e;
    cin>>n>>e;
    for(int i=0; i<=n; i++){
        par[i]=-1;
        dis[i]=1e18;
    }
    while(e--){
        int u,v,w;
        cin>>u>>v>>w;
        edgelist[u].push_back({w,v});
        edgelist[v].push_back({w,u});
    }
    dijkstra(1);
    vector<ll> path;
    if(dis[n]==1e18) cout<<-1<<endl;
    else{
        int x=n;
        while(x!=-1){
            path.push_back(n);
            x=par[n];
        }
        sort(path.begin(), path.end());
        for(ll val:path) cout<<val<<" "
    }
    return 0;
}