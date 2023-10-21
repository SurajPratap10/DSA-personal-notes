// #include <bits/stdc++.h>
// bool isCyclicBFS(int src, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited, unordered_map<int, int> &parent) {
//     parent[src] = -1;
//     visited[src] = true;
//     queue<int> q;
//     q.push(src);

//     while (!q.empty()) {
//         int front = q.front();
//         q.pop();

//         for (auto neighbour : adj[front]) {
//             if (visited[neighbour] && neighbour != parent[front]) {
//                 return true;  // cycle detected
//             } else if (!visited[neighbour]) {
//                 q.push(neighbour);
//                 visited[neighbour] = true;
//                 parent[neighbour] = front;
//             }
//         }
//     }
//     return false;
// }

// string cycleDetection(vector<vector<int>> &edges, int n, int m) {
//     // adjacency list:
//     unordered_map<int, list<int>> adj;
//     for (int i = 0; i < m; i++) {
//         int u = edges[i][0];
//         int v = edges[i][1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     // handling disconnected components:
//     unordered_map<int, bool> visited;
//     unordered_map<int, int> parent;  // Add 'parent' map
//     for (int i = 0; i < n; i++) {
//         if (!visited[i]) {
//             bool ans = isCyclicBFS(i, adj, visited, parent);
//             if (ans) {
//                 return "Yes";
//             }
//         }
//     }
//     return "No";
// }
