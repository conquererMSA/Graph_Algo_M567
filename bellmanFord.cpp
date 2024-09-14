#include<bits/stdc++.h>
using namespace std;
//Edge and cost rakhar jonno ekti custom class Edge create korte hobe.
class Edge{
    public:
    int u,v,c;
    Edge(int u, int v, int c){
        this->u=u;
        this->v=v;
        this->c=c;
    }
};
const int N=10;
int dis[N];
int main(){
    int n, e;
    cin>>n>>e;
    vector<Edge> edgeList; //edge and cost rakhar jonno
    while(e--){
        int u,v,c;
        cin>>u>>v>>c;
        edgeList.push_back(Edge(u,v,c));

    }
    //dis er proti index e INF assign kora hocce.
    for(int i=0; i<n; i++){
        dis[i]=INT_MAX;
    }
    dis[0]=0; //source er dis 0 hobe. Graph e Negative Weight Cycle takle source er dis minus value hoye zay.
    for(int i=1; i<=n-1; i++){
        //ekbar sob gulu path relax hobe
        for(Edge ed:edgeList){
        int u,v,c;
        u=ed.u;
        v=ed.v;
        c=ed.c;
        if(dis[u]<INT_MAX&&dis[u]+c<dis[v]){
            dis[v]=dis[u]+c;
           }
        }
    }
    //Cycle detection: N-1 iteration e sob gulu node path relaxed hoye zay. N-1 bar iteration er por zodi kuno node er path relaxed hoy tarmane graph e negative weight cycle ache.
    bool cycle=false;
    for(Edge ed:edgeList){
        int u,v,c;
        u=ed.u;
        v=ed.v;
        c=ed.c;
        if(dis[u]<INT_MAX&&dis[u]+c<dis[v]){
          cycle=true;
          break;
        }
    }
    if(cycle){
        cout<<"Cycle detected"<<endl;
    }
    else{
        for(int i=0; i<n; i++){
            cout<<i<<" -> "<<dis[i]<<endl;
        }
    }
    return 0;
}