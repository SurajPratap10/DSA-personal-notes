// #include <iostream>
// #include <unordered_map>
// #include <list>
// #include <queue>
// using namespace  std;

// Graphs:

// Q1) Cycle Detetction In Directed Graph using BFS:

// int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges) {
//   //adjacency list:
//   unordered_map<int, list<int>> adj;
//   for(int i=0; i<edges.size(); i++){
//     int u = edges[i].first - 1;
//     int v = edges[i].second - 1;

//     adj[u].push_back(v);
//   }
//   //find all In-degrees:
//   vector<int> indegree(n);
//   for(auto i : adj){
//     for(auto j : i.second){
//       indegree[j]++;
//     }
//   }
//   //0-indegree wale ko push kro in Queue:
//   queue<int> q;
//   for(int i=0; i<n; i++){
//     if(indegree[i] == 0){
//       q.push(i);
//     }
//     //BFS approach:
//     int cnt = 0;
//     while(!q.empty()){
//       int front = q.front();
//         q.pop();
//     }
//     cnt++;
//   }
//   //update neighbour indegree:
//   for(auto neighbour : adj[front]){
//     indegree[neighbour]--;
//     if(indegree[neighbour] == 0){
//       q.push(neighbour);
//     }
//   }
// if(cnt == 0){
//     return true; //valid Topo so DAG(no cycle)
//   }
// else{
//   return false; //invalid Topo so (cycle)
// }
