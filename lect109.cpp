// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <list>
// #include <stack>
// using namespace  std;

// Graphs:

// KOSARAJU'S ALGORITHM: used to count SSC's...

// Q1) Count Strongly Connected Components (SSC's):

// void dfs(int node, unordered_map<int, bool> &visited, stack<int> &st,
// unordered_map<int, list<int>> &adj) {
//     visited[node] = true;
//     for (auto nbr : adj[node]) {
//         if (!visited[nbr]) {
//             dfs(nbr, visited, st, adj);
//         }
//     }
//     st.push(node);
// }

// void revDfs(int node, unordered_map<int, bool> &visited, unordered_map<int,
// list<int>> &adj) {
//     visited[node] = true;
//     for (auto nbr : adj[node]) {
//         if (!visited[nbr]) {
//             revDfs(nbr, visited, adj);
//         }
//     }
// }

// int stronglyConnectedComponents(int v, vector<vector<int>> &edges) {
//     // Adjacency list:
//     unordered_map<int, list<int>> adj;
//     for (int i = 0; i < edges.size(); i++) {
//         int u = edges[i][0];
//         int v = edges[i][1];

//         adj[u].push_back(v); // Since it's a directed graph only.
//     }
//     // (i) Topological sort:
//     stack<int> st;
//     unordered_map<int, bool> visited;
//     for (int i = 0; i < v; i++) {
//         if (!visited[i]) {
//             dfs(i, visited, st, adj);
//         }
//     }
//     // (ii) Transpose the graph:
//     unordered_map<int, list<int>> transpose;
//     for (int i = 0; i < v; i++) {
//         visited[i] = 0;
//         for (auto nbr : adj[i]) {
//             transpose[nbr].push_back(i);
//         }
//     }
//     // (iii) DFS call using above ordering:
//     int count = 0;
//     while (!st.empty()) {
//         int top = st.top();
//         st.pop();
//         if (!visited[top]) {
//             count++;
//             revDfs(top, visited, transpose);
//         }
//     }
//     return count;
// }
