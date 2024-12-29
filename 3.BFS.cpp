#include "./utils/Graph.hpp"

void Graph::BFS(int start_vertex){
    queue<int> queue;
    visited.insert(start_vertex);
    queue.push(start_vertex);
    while(!queue.empty()){
        int current_Vertex = queue.front();
        queue.pop();
        cout << current_Vertex << " ";
        for( int neighbor : adjacencyList[current_Vertex]){
            if(!visited.contains(neighbor)){
                visited.insert(neighbor);
                queue.push(neighbor);
            }
        }
    }
    cout << endl;
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
    
    graph.BFS(0);

    return 0;
}