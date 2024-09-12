#include<bits/stdc++.h>
using namespace std;
int N=10e2;
vector<pair<int,int>> v[N];
int dis[N];
void dijkstra_naive(int src){
    int queue<pair<int,int>> q;
    dis[src]=0;
    q.push({src,0});
    while(!q.empty()){
        pair<int,int> parent=q.front();
        int node=parent.first;
        int cost=parent.second;
        q.pop();
        for(pair<int,int> child:v[node]){
            int childNode=child.first;
            int childCost=child.second;
            if(cost+childCost<dis[childNode]){
                dis[childNode]=cost+childCost;
                q.push({childNode,dis[childNode]});
            }
        }
    }
}
int main(){
    int n,e;
    cin>>n>>e;
    while(e--){
      int a,b,c;
      cin>>a>>b>>c;
      v[a].push_back({b,c});
      v[b].push_back({a,c});
    }
    
    for(i=0;i<n; i++){
        dis[i]=INT_MAX;
    }
    dijkstra_naive(0);
    return 0;
}