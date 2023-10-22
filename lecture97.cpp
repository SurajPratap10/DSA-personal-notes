// #include <iostream>
// #include <unordered_map>
// #include <list>
// #include <queue>
// using namespace  std;

// Graphs:

// Q1) Cycle Detection In Directed Graph using DFS:

// DFS code:

// bool gotCycle(int src,  unordered_map<int, bool> &visited, unordered_map<int,
// bool> &dfsVisited, unordered_map<int, list<int>> &adj) {
//   visited[src] = true;
//   dfsVisited[src] = true;

//   for(auto neighbour : adj[src]) {
//     if (!visited[neighbour]) {
//       bool cycleDetected = gotCycle(neighbour, visited, dfsVisited, adj);
//       if (cycleDetected) {
//         return true;
//       }
//     } else if (dfsVisited[neighbour]) {
//       return true;
//     }
//   }
//   // While returning, mark unvisited in dfsVisited:
//   dfsVisited[src] = false;
//   return false;
// }

// int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges) {
//   // Adjacency list:
//   unordered_map<int, list<int>> adj;
//   for(int i = 0; i < edges.size(); i++) {
//     int u = edges[i].first;
//     int v = edges[i].second;

//     adj[u].push_back(v);
//   }

//   // Call DFS for all components:
//   unordered_map<int, bool> visited;
//   unordered_map<int, bool> dfsVisited;
//   for(int i = 1; i <= n; i++) {
//     if (!visited[i]) {
//       bool hasCycle = gotCycle(i, visited, dfsVisited, adj);
//       if (hasCycle) {
//         return true;
//       }
//     }
//   }
//   return false;
// }
