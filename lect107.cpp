// #include <iostream>
// #include <unordered_map>
// #include <list>
// #include <queue>
// using namespace  std;

// Graphs:

// Q1) Bridges In Graph:

// void dfs(int node, int parent, int &timer, vector<int> &disc, vector<int>
// &low, vector<vector<int>> &result,
//         unordered_map<int, list<int>> &adj, unordered_map<int, bool>
//         &visited) {
//     visited[node] = true;
//     disc[node] = low[node] = timer++;

//     for (auto nbr : adj[node]) {
//         if (nbr == parent) {
//             continue;
//         }
//         if (!visited[nbr]) {
//             dfs(nbr, node, timer, disc, low, result, adj, visited);
//             low[node] = std::min(low[node], low[nbr]);
//             // Check for BRIDGE:
//             if (low[nbr] > disc[node]) {
//                 vector<int> ans;
//                 ans.push_back(node);
//                 ans.push_back(nbr);
//                 result.push_back(ans);
//             }
//         } else {
//              // Node i.e already visisted and not a parent:
//             // Back Edge:
//             low[node] = min(low[node], disc[nbr]);
//         }
//     }
// }

// vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) {
//     // Adjacency
//     unordered_map<int, list<int>> adj;
//     for(int i = 0; i < e; i++){
//         int u = edges[i][0];
//         int v = edges[i][1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     int timer = 0;
//     vector<int> disc(v);
//     vector<int> low(v);
//     int parent = -1;
//     unordered_map<int, bool> visited;

//     vector<vector<int>> result;
//     // DFS:
//     for( int i = 0; i < v; i++){
//         if(!visited[i]){
//             dfs(i, parent, timer, disc, low, result, adj, visited);
//         }
//     }
//     return result;
// }
