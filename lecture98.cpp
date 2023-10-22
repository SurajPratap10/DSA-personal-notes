// #include <iostream>
// #include <unordered_map>
// #include <list>
// #include <queue>
// using namespace  std;

// Graphs:

// Q1) Topological Sort using (DFS):

// void topoSort(int src, vector<bool> &visited, stack<int> &s,
// unordered_map<int, list<int>> &adj) {
//     visited[src] = 1;

//     for (auto neighbour : adj[src]) {
//         if (!visited[neighbour]) {
//             topoSort(neighbour, visited, s, adj);
//         }
//     }
//     s.push(src);  //push in stack
// }

// vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e) {
//     //Adjacency list:
//     unordered_map<int, list<int>> adj;
//     for (int i = 0; i < e; i++) {
//         int u = edges[i][0];
//         int v = edges[i][1];
//         adj[u].push_back(v);
//     }
//     //call DFS topological sort for rest of elements:
//     vector<bool> visited(v, false);  // Initialize the visited vector with
//     false values stack<int> s;

//     for (int i = 0; i < v; i++) {
//         if (!visited[i]) {
//             topoSort(i, visited, s, adj);
//         }
//     }

//     vector<int> ans;
//     while (!s.empty()) {
//         ans.push_back(s.top());
//         s.pop();
//     }

//     return ans;
// }
