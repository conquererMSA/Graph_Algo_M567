#include<bits/stdc++.h>
using namespace std;
class Edge {
    int u,v,w;
    Edge(int u,int v, int w){
        this->u=u;
        this->v=v;
        this->w=w;
    }
};
int par[100005];
int siz[100005];
void dsuInitialize(int siz){
    for(int i=0; i<siz; i++){
        siz[i]=1;
        par[i]=-1;
    }
}
int findingLeader(int n){
   if(par[n]==-1) return n;
   int leader=findingLeader(par[n]);
   par[n]=leader;
   return leader;
}
void dsuUnionBySize(int n, int m){
    int leaderOfN=findingLeader(n);
    int leaderOfM=findingLeader(m);
    if(siz[leaderOfN]>siz[leaderOfM]){
        par[leaderOfM]=leaderOfN;
        siz[leaderOfM]+=siz[leaderOfN];
    }
    else{
        par[leaderOfN]=leaderOfM;
        siz[leaderOfN]+=siz[leaderOfM];
    }
}
int main(){
    int n,e;
    cin>>n>>e;
    dsuInitialize(n);
    vector<Edge> edgelist;
    while(e--){
        int u,v,w;
        cin>>u>>v>>w;
        edgelist.push_back(Edge(u,v,w));
    }
    sort(edgelist.begin(), edgelist.end(),[](Edge a, Edge b){
        return a.w<b.w;
    })
    int totalMinCost=0;
    
    for(Edge ed: edgelist){
        if(findingLeader[ed.u]!=findingLeader[ed.v]){
            totalMinCost+=ed.w;
            dsuUnionBySize(ed.u, ed.v);
        }
    }
    cout<<totalMinCost<<endl;
    return 0;
}