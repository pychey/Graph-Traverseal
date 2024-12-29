#include <iostream>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>

using namespace std;

class Graph {
private:
    map<int, list<int>> adjacencyList;
    set<int> visited;
public:
    void addEdge(int u, int v){
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u);
    }

    void displayGraph() {
        for( auto vertex : adjacencyList){
            cout << vertex.first << " -> ";
            for ( int adjacency_Vertex : adjacencyList[vertex.first]) {
                cout << adjacency_Vertex << " ";
            }
            cout << endl;
        }
    }

    void DFS(int vertex);
    void DFS_Stack(int start_vertex);
    void BFS(int start_vertex);
};
