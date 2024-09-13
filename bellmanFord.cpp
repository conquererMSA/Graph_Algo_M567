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
int main(){
    int n,e;
    cin>>n>>e;
    vector<Edge> edges;
    while(e--){
        int u,v,c;
        cin>>u>>v>>c;
        edges.push_back(Edge(u,v,c));
    }
    for(int i=0; i<e; i++){
        cout<<edges[i].u<<" "<<edges[i].v<<" "<<edges[i].c<<endl;
    }
    return 0;
}