#include<bits/stdc++.h>
using namespace std;
/*
  
*/
int N=(1e5)+5;
vector<int> adjList[N];
int vis[N];
int dis[N];
void bfs(int src){
    vis[src]=true;
    dis[src]=0;
    queue<int> q;
    q.push(src);
    while(!q.empty()){
        int parent=q.front();
        for(int child:v[parent]){
            if(!vis[child]){
                dis[child]=dis[parent]+1;
                q.push(child);
            }
        }
    }
}
int main(){
    int n,e;
    cin>>n>>e;
    while(e--){
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    int src,des,step;
    cin>>src>>des>>step;
    bfs(src);
    if(vis[des]!=-1 && vis[des]<=step*2)  cout<<"YES";
    else cout<<"NO"<<endl;
    return 0;
}