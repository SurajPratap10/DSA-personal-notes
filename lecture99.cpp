// #include <iostream>
// #include <unordered_map>
// #include <list>
// #include <queue>
// using namespace  std;

// Graphs:

// Kahn's Algorithm : INDEGREE + BFS approach...

// Q1) Topological Sort using (Kahn's Algorithm):

// vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e){
//   //adjacency list:
//   unordered_map<int, list<int>> adj;
//   for(int i=0; i<e; i++){
//     int u = edges[i][0];
//     int v = edges[i][1];

//     adj[u].push_back(v);
//   }
//   //find all In-degrees:
//   vector<int> indegree(v);
//   for(auto i : adj){
//     for(auto j : i.second){
//       indegree[j]++;
//     }
//   }
//   //0-indegree wale ko push kro in Queue:
//   queue<int> q;
//   for(int i=0; i<v; i++){
//     if(indegree[i] == 0){
//       q.push(i);
//     }
//     //BFS approach:
//     vector<int> ans;
//     while(!q.empty()){
//       int front = q.front();
//         q.pop();
//     }
//     //store ans:
//     ans.push_back(front);
//   }
//   //update neighbour indegree:
//   for(auto neighbour : adj[front]){
//     indegree[neighbour]--;
//     if(indegree[neighbour] == 0){
//       q.push(neighbour);
//     }
//   }
// }
