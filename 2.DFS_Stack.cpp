#include "./utils/Graph.hpp"

void Graph::DFS_Stack(int start_vertex){
    stack<int> stack;
    visited.insert(start_vertex);
    stack.push(start_vertex);
    while(!stack.empty()){
        int current_Vertex = stack.top();
        stack.pop();
        cout << current_Vertex << " ";
        for(list<int>::reverse_iterator neighbor = adjacencyList[current_Vertex].rbegin(); neighbor != adjacencyList[current_Vertex].rend(); ++neighbor){
            if(!visited.contains(*neighbor)){
                visited.insert(*neighbor);
                stack.push(*neighbor);
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
    
    graph.DFS_Stack(0);

    return 0;
}