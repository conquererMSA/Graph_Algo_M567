#include<bits/stdc++.h>
using namespace std;
const int N=1000;
vector<int> adj[N];
bool vis[N];        
int disFromSrc[N];
int disDromDes[N];
void bfs(int src, int track){
    vis[src]=true;
    if(track==1) disFromSrc[src]=0;
    else disDromDes[src]=0;
    queue<int> q;
    q.push(src);
    while(!q.empty()){
        int par=q.front();
        q.pop();
        for(int child:adj[par]){
            if(!vis[child]){
                if(track==1){
                    disFromSrc[child]+=disFromSrc[par];
                }
                else{
                    disDromDes[child]+=disDromDes[par];
                }
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    int ans=INT_MIN;
    while(t--){
        int n,e;
        cin>>n>>e;
        while(e--){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(int i=0; i<n; i++){
            vis[i]=false;
            disFromSrc[i]=-1;
        }
        int src, des;
        cin>>src>>des;
        bfs(src,1);
        for(int i=0; i<n; i++){
            vis[i]=false;
            disDromDes[i]=-1;
        }
        bfs(des,2);
        for(int i=0; i<n; i++){
            adj[i].clear();
        }
        for(int i=0; i<n; i++){
            int val=disDromDes[i]+disFromSrc[i];
            ans=mx(val,ans);
        }
        cout<<ans;
    }
    return 0;
}