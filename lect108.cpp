// #include <iostream>
// #include <unordered_map>
// #include <list>
// #include <queue>
// using namespace  std;

// Graphs:

// Articulation Points In A Graph:

// void dfs(int node, int parent, int &timer, vector<int> &disc, vector<int>
// &low,
//          unordered_map<int, list<int>> &adj, unordered_map<int, bool>
//          &visited, vector<int> &ap) {

//   visited[node] = true;
//   disc[node] = low[node] = timer++;
//   int child = 0;

//   for (auto nbr : adj[node]) {
//     if (nbr == parent) {
//       continue;
//     }
//     if (!visited[nbr]) {
//       dfs(nbr, node, timer, disc, low, result, adj, ap, visited);
//       low[node] = std::min(low[node], low[nbr]);
//       // Check for Articulation Point:
//       if (low[nbr] >= disc[node] && parent != -1) {
//         ap[node] = 1; //true
//       }
//       child++;
//     } else {
//       // Node i.e already visisted and not a parent:
//       // Back Edge:
//       low[node] = min(low[node], disc[nbr]);
//     }
//   }
//   //exception/special case:
//   if(parent == -1 && child > 1){
//    ap[node] = 1; //true
// }

// // Adjacency List:
// unordered_map<int, list<int>> adj;
// for (int i = 0; i < edges.size(); i++) {
//   int u = edges[i][0];
//   int v = edges[i][1];

//   adj[u].push_back(v);
//   adj[v].push_back(u);
// }

// int timer = 0;
// vector<int> disc(n);
// vector<int> low(n);
// int parent = -1;
// unordered_map<int, bool> visited;
// vector<int> ap(0, n);

// for (int i = 0; i < n; i++) {
//   disc[i] = -1;
//   low[i] = -1;
// }
// // dfs:
// for (int i = 0; i < n; i++) {
//   if (!vis[i]) {
//     dfs(i, -1, disc, low, visited, adj, ap, timer);
//   }
// }
