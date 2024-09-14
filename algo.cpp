#include<bits/stdc++.h>
using namespace std;
/*
 Dijkstra algorithme: 
 Non negative weighted graph e dijkstra algo use kora hoy. Tobe negative weighted graph e o dijkstra algo use kora zay, zodi na graph e negative-cycle thake. Negative Cycle Dijkstra alogo detect korte pare, infinity loop e cole zay.

 Dijkstra algo te dis[] array maintain kora hoy. Protome dis er prottyekti index-value INF thake. Pore path relaxation hole change hoy.

 Dijkstra algo ekti queue solution. Ekhane parent-child strategy use kora hoy. vector<pair<childNode, weight>> thake. Queue te ekti pair e parent er child and child er edge cost rakha hoy.

Bellman-Ford:
Bellman-Ford algo edge niye kaj kore. Eksathe u,v,c rakhar jonno ekti Edge class create kora hoy. Sob gulu edge ke tar cost soho ekti list(edgelist) e rekha deya hoy. dis[] te sob gulu node er distance INF kora thake, tobe first iteration er age source node er dis 0 kora hoy.
Zodi graphe n number er node thake tahole sorbucco n-1 bar path relaxation e sob gulu node er shortest dis pawya zabe. Source er dis 0 kore deyay n-1 bar loop colbe and protibar at least ekti node er shortest path pawya zabe gurantted. Poti iteration e sob gulu edge ber hobe and relax howyar try korbe. Proti iteration e sob gulu edge er u,v,c ber hobe.

Cycle detection: N-1 iteration e sob gulu node path relaxed hoye zay. N-1 bar iteration er por zodi kuno node er path relaxed hoy tarmane graph e negative weight cycle ache.



Floyed Warshall Algoritme:
Negative Weighted graph e floyed warshall algo use kora hoy. Graph er edge cost 2D Grid array te rakha hoy. Floyed warshall algo hocce tinti nested loop er easy solution. Graph e eti negative cycle detect korte pare. Tinti nested loop shesh howyar por zodi 2D Matrix er kuno primary diagonal value minus hoye zay tokhon eti Negative-Cycle detect kore.

   
 
*/
