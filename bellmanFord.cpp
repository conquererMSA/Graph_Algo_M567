#include<bits/stdc++.h>
using namespace std;
class Edge{
    public:
    int u,v,c;
    Edge(int u, int v, int c){
        this->u=u;
        this->v=v;
        this->c=c;
    }
};
int dis[100];
int main(){
    int n,e;
    cin>>n>>e;
    vector<Edge> edges;
    while(e--){
        int u,v,c;
        cin>>u>>v>>c;
        edges.push_back(Edge(u,v,c));
    }
    for(int i=0; i<n; i++){
        dis[i]=INT_MAX;
    }
    dis[0]=0; //set source cost
    for(int i=0; i<n; i++){
        for(Edge ed:edges){
        int u,v,c;
        u=ed.u;
        v=ed.v;
        c=ed.c;
        // dis[u]<INT_MAX hole ei node e visit kora hoyeche end er cost set ache
        if(dis[u]<INT_MAX&& dis[u]+c<dis[v]){
            dis[v]=dis[u]+c;
        }
    }

    }
    for(int i=0; i<n; i++){
     cout<<i<<"-> "<<dis[i]<<endl;
    }
    return 0;
}