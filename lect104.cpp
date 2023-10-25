// #include <iostream>
// #include <unordered_map>
// #include <list>
// #include <queue>
// using namespace  std;

// Graphs:

// Dijkstra's Algorithm:

// vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int
// source) {
//     // Adjacency list:
//     unordered_map<int, list<pair<int, int>>> adj;
//     for (int i = 0; i < edges; i++) {
//         int u = vec[i][0];
//         int v = vec[i][1];
//         int w = vec[i][2];

//         adj[u].push_back(make_pair(v, w));
//         adj[v].push_back(make_pair(u, w));
//     }
//     // Distance vector created & initialized with a very high value at first:
//     vector<int> dist(vertices, INT_MAX);
//     dist[source] = 0;

//     // Set creation:
//     set<pair<int, int>> st;
//     st.insert(make_pair(0, source));

//     while (!st.empty()) {
//         // Get top records:
//         auto top = *(st.begin());

//         int nodeDistance = top.first;
//         int topNode = top.second;

//         // Remove top records:
//         st.erase(st.begin());

//         // Traverse on neighbors:
//         for (auto& neighbor : adj[topNode]) {
//             if (nodeDistance + neighbor.second < dist[neighbor.first]) {
//                 auto record = st.find(make_pair(dist[neighbor.first],
//                 neighbor.first));

//                 // If record found, then erase it:
//                 if (record != st.end()) {
//                     st.erase(record);
//                 }
//                 // Update record:
//                 dist[neighbor.first] = nodeDistance + neighbor.second;
//                 // Push record in set:
//                 st.insert(make_pair(dist[neighbor.first], neighbor.first));
//             }
//         }
//     }
//     return dist;
// }

// neighbour.second => matalb neighbour ka distance from node

// dist[neighbour.first] => matlab dist array me jo hai (3,1) uska distance say
// yaha (3)
