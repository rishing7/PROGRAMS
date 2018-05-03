#include<bits/stdc++.h>
using namespace std;
#define N 4
struct Edge{
    int src, dest, weight;
};
class Graph{
public:
    vector< pair<int, int> > adjList[N];
    Graph(vector<Edge> edges){
        for(unsigned int i=0; i<edges.size(); i++)
        {
            int src = edges[i].src;
            int dest = edges[i].dest;
            int weight = edges[i].weight;
            adjList[src].push_back(make_pair(dest, weight));
        }
    }
};
void printGraph(Graph const &graph){
    for(int i=0;i<N;i++)
    {
        cout<<i<<" --> ";
        for(pair<int, int> v: graph.adjList[i])
            cout<<" ( "<< i <<" "<< v.first<<" "<<v.second<<" ) ";
        cout<<endl;

    }
}
int main(){
    vector<Edge> edges=
    {
    {0,1,6},{2,0,5},{2,1,4},{1,2,7},{3,2,10}
    };
    Graph graph(edges);
    printGraph(graph);
 return 0;
}
