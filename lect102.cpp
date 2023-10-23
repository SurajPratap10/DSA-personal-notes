// #include <iostream>
// #include <unordered_map>
// #include <list>
// #include <queue>
// using namespace  std;

// Graphs:

// Q1) Shortest Path In Undirected Graph:

// vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s
// , int t){
//   //adjacency list:
//   unordered_map<int, list<int>> adj;
//   for(int i=0; i<edges.size(); i++){
//     int u = edges[i].first;
//     int v = edges[i].second;

//     adj[u].push_back(v);
//     adj[v].push_back(u);
//   }
//   //BFS:
//   unordered_map<int, bool> visited;
//   unordered_map<int, int> parent;
//   queue<int> q;
//   q.push(s); // s -> src node
//   parent[s] = -1; // default value for parent of src node
//   visited[s] = true;

//   while(!q.empty()){
//     int front = q.front();
//     q.pop();

//   for(auto i : adj[front]){
//     if(!visited[i]){
//       visited[i] = true;
//       parent[i] = front;
//       q.push(i);
//     }
//   }
// }
//   //shortest path:
//   vector<int> ans;
//   int currNode = t; // t -> target node
//   ans.push_back(t);

//   while(currNode != s){
//     currNode = parent[currNode];
//     ans.push_back(currNode);
//   }
//   reverse(ans.begin(), ans.end());
//   return ans;

// }
