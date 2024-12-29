# Graph-Traverseal

1.Breif overview of graph i used :
    -I used adjacencyList to represent my graph. i use map that store the adjacencyList where each map store interger as its key which is the vertex, and list of intergers as its value which are its adjacency vertices. 
    -I have addEdge function for the graph where it add an undirected edge of 2 vertices given in the parameter of the function.
    -I have displayGraph function where it will display the graph using adjacencyList structure.

2.DFS traversal process and its result obtained :
    -For recursive approach :
        + I first mark the start_vertex as visited and print the vertex, 
        + then i loop thru its neighbor, if the neighbor is not visited, i will mark it as visited and call the function again by giving the unvisited neighbor as the parameter
        + this approach will make sure to go deep first before backtracking and continue its deep search if it meets unvisited neighbor during backtracking, this process continue until all vertices in graph are printed out.

        Result: print from the start_vertex to first neighbor's depth level then backtrack, if met an unvisited neighbor, continue its digging untill all vertices under first neighbor are printed out, and if there's a second neighbor of the start_vertex or more, then it continues on the second neighbor then the third till the last, so every vertices are printed out.

    -For stack approach :
        + I first created a stack, then mark the start_vertex as visited, push it into the stack,
        + While stack is not empty, get the top vertex in stack , pop it out the stack, then print it,
        + loop thru its neighbor, then mark the unvisited neighbor as visited and push it into stack
        + note that the loop is thru its neighbor in reverse so that we will get the first neighbor on top of the stack.
        + after done pushing all its neighbor into stack, the while-loop will continue picking first neighbor like going deep first before backtracking and continue on second neighbor that was in the stack, then if that second neighbor contains unvisited vertex, the process of going deep of that vertex will continue until all vertices in stack are printed out.

        Result: same with recursive approach.

3.BFS traversal process and its result obtained :
    -Queue approach :
        + I first created a queue, then mark the start_vertex as visited and enqueue it into the queue,
        + While queue is not empty, get the front vertex of queue, dequeue it out the queue and print it,
        + Go thru all its neighbor, if neighbor is unvisited, mark it as visted and enqueue it
        + Now the queue contains all neighbor of the start vertex, while-loop will continue picking front vertex in queue which are these neighbors of the start_vertex in that queue first while also enqueuing all neighbors of each neighbor into the back of the queue, and this process will continue printing all vertices in the current level first before moving to the next level until all vertices in the last level are printed out.

        Result : first print the start-vertex, then all its neighbor, then all neighbors of its each neighbor and so on, basically print the start_vertex which is level 0 then all neighbors which is level 1 then level 2 and so on till all vertices in last level are printed out.

4.Observation and insight gained from traversal process :
    - I learned basic use of following libaries, <stack>, <map>, <queue>, <list>, <set>.
    - Understanding more about graph, adjacencyList, and how using map represent the adjacency list structure.
    - Learnt how to loop thru adjacencyList structure and vertex's adjacency vertices.
    - Learnt how dfs is implemented using both recursive and stack.
    - Learnt how bfs is implemented using queue.