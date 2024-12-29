#include "./utils/Graph.hpp"

void Graph::DFS(int current_vertex){
    visited.insert(current_vertex);
    cout << current_vertex << " ";
    for( int neighbor : adjacencyList[current_vertex]){
        if(!visited.contains(neighbor)) {
            DFS(neighbor);
        }
    }
}

int main() {
    Graph graph;
    //list<int> vectices = {0,1,2,3};
    graph.addEdge(0,1);
    graph.addEdge(0,4);
    graph.addEdge(1,2);
    graph.addEdge(1,3);
    graph.addEdge(3,4);

    //graph.displayGraph();
    
    graph.DFS(0);

    cout << endl;
    return 0;
}