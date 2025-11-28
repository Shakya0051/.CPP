#include<iostream>
using namespace std;

class Graph
{
    private:
     int V;
     int E;
     int **adjMatrix;

    public:
    Graph(int nodes)
    {
       V = nodes;
       E = 0;
       adjMatrix = new int*[V];

       for(int i=0; i<V; i++)
       {
          adjMatrix[i] = new int[V];
          for(int j=0; j<V; j++)
          {
            adjMatrix[i][j] = 0;
          }
       }
    } 

    //Add Edges(Undirected)
    void addEdge(int u, int v)
    {
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1;
        E++;
    }
    
    //Print Graph
    void printGraph()
    {
        cout<<V<<"vertices"<<E<<"edges"<<endl;
        for(int i=0; i<V; i++)
        {
            cout<<i<<":";
            for(int j=0; j<V; j++)
            {
                cout<<adjMatrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    //Destructor
    ~Graph()
    {
        for(int i=0; i<V; i++)
        {
            delete[] adjMatrix[i];
        }
        delete[] adjMatrix;
    }
    
};

int main()
{
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,4);
    g.addEdge(2,3);
    g.addEdge(2,4);
    g.addEdge(3,4);

    g.printGraph();

    return 0;
}