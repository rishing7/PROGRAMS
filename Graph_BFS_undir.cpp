#include<bits/stdc++.h>
#define N 15
using namespace std;
struct Edge{
    int src, dest;
};
class Graph{
public:
    vector<int> adjList[N];
    Graph(vector<Edge> edges)
    {
            for(unsigned int i=0;i<edges.size(); i++)
            {
                int src = edges[i].src;
                int dest = edges[i].dest;
                adjList[src].push_back(dest);
                adjList[dest].push_back(src);
            }
    }
};
void BFS(Graph const &graph, vector<bool> &visited, int i)
{
    queue<int> q;
    visited[i] = true;
    q.push(i);
    int top;
    while(!q.empty())
    {
        top = q.front();
        q.pop();
        cout<<top<<" ";
        for(int l:graph.adjList[top])
        {
            if(!visited[l])
            {
                q.push(l);
                visited[l]=true;
            }
        }

    }
}
int main()
{
    vector<Edge> edges = {
		{1, 2}, {1, 3}, {1, 4}, {2, 5}, {2, 6}, {5, 9},
		{5, 10}, {4, 7}, {4, 8}, {7, 11}, {7, 12}
		// vertex 13 and 14 are single nodes
	};
    vector<bool> visited(N);
    Graph graph(edges);
    for(int i=1;i<N;i++)
    {
        if(visited[i]==false)
        BFS(graph,visited,i);
    }
    return 0;
}
