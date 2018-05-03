#include<bits/stdc++.h>
using namespace std;
#define N 5
struct edge{
    int src;
    int dest;
};
class Graph{
public:
    vector<int> adjList[N];
    Graph(vector<edge> edges)
    {
        for(unsigned int i=0; i<edges.size();i++)
        {
            int src = edges[i].src;
            int des = edges[i].dest;
            adjList[src].push_back(des);
        }
    }
};
void printGraph(Graph const& graph)
{
    for(int i=0; i<N; i++)
    {
        cout<<i<<"-->";
        for(int v : graph.adjList[i])
            cout<< v << " ";
        cout<<endl;
    }
}
int main()
{
    vector<edge> edges =
    {
      {0,1},{1,2},{1,3},{1,4},{0,4},{4,3},{3,2}
    };
    Graph graph(edges);
    printGraph(graph);
    return 0;
}
