#include<bits/stdc++.h>
using namespace std;
struct Graph{
    int vertices;
    int edges;
    int **AdjList;
};
struct Graph *createGraph(int vertices, int edges)
{
    Graph *G = (struct Graph *)malloc(sizeof(struct Graph));
    G->vertices = vertices;
    G->edges = edges;
    G->AdjList = (int**)malloc(sizeof(int)*vertices*vertices);
    //memset(G->AdjList, 0, sizeof(G->AdjList));
    for(int i=0;i<G->vertices;i++)
    {
        for(int j=0;j<G->vertices;j++)
            G->AdjList[i][j]=0;
    }
    int u,v;
    for(int i=0;i<edges;i++)
    {
        cout<<"Enter the edges u and v value: ";
        cin>>u>>v;
        G->AdjList[u][v]=1;
        G->AdjList[v][u]=1;
    }
    return G;
}
int main()
{
    int vert,edge;
    cout<<"Enter no. of vertices: ";
    cin>>vert;
    cout<<"Enter no. of edges:";
    cin>>edge;
    Graph *G = createGraph(vert, edge);
    for(int i=0;i<vert;i++)
    {
        cout<<i<<"->";
        for(int j=0;j<vert;j++)
        {
            if(G->AdjList[i][j])
                cout<<j<<"->";
        }
        cout<<endl;
    }
    return 0;
}
