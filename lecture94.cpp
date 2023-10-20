// #include <iostream>
// #include <unordered_map>
// #include <list>
// #include <queue>
// using namespace  std;

// Graphs:

// Q1) BFS Traversal in graph:

// int prepareAdjList(unordered_map<int, list<int>> &adjList,
//                    vector<pair<int, int>> &edges) {
//   for (int i = 0; i < edges.size(); i++) {
//     int u = edges[i].first;
//     int v = edges.[i].second;
//     adjList[u].push_back(v);
//     adjList[v].push_back(u);
//   }
// }

// void BFS(unordered_map < int, list<int> &adjList,
//          unordered_map<int, bool> &visited, vector<int> ans int node) {
//   queue<int> q;
//   q.push(node);
//   visited[node] = 1;
//   while (!q.empty()) {
//     int frontNode = q.front();
//     q.pop();

//     // storing ans:
//     ans.push_back(frontNode);

//     // traverse all neighbours of frontNode and if not visted then push in
//     // queue:
//     for (auto i : adjList[frontNode]) {
//       if (!visited[i]) {
//         q.push(i);
//         visited[i] = 1;
//       }
//     }
//   }
// }

// void bfsTraversal(int vertex, vector<pair<int, int>> edges) {
//   unoreder_map<int, list<int>> adjList;
//   vector<int> ans;
//   unordered_map<int, boool> visited;

//   prepareAdjList(adjList, edges);

//   for (int i = 0; i < vertex; i++) {
//     if (!visited[i]) {
//       BFS(adjList, visted, ans, i);
//     }
//   }
// }
