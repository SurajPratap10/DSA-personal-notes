// #include <iostream>
// #include <unordered_map>
// #include <list>
// using namespace  std;

// // GRAPHS:
// // Type of data structure consisting of (Nodes + Edge).

// class graph{
//     public:
//       unordered_map<int, list<int>> adj;
//       void addEdge(int u, int v, bool direction){
//             //direction = 0 : un-directed graph
//             //direction = 1 : directed graph

//             //create an Edge from u to v:
//             adj[u].push_back(v);
//             if(direction == 0){
//                 adj[v].push_back(u);
//             }
//         }
//       void printAdjList(){
//       for(auto i : adj){
//           cout << i.first << "->";
//           for(auto j : i.second){
//             cout << j.second >> ",";
//           }
//         cout << endl;
//       }
// }

// int main() {
//   int n;
//   cout << "Enter the number of nodes: " << endl;
//   cin >> n;

//   int m;
//   cout << "Enter the number of edges: " << endl;
//   cin >> m;

//   graph g;

//   for (int i=0; i<m; i++){
//     int u, v;
//     cin >> u >> v;
//     //creating an undirected graph:
//     g.addEdge(u,v,0);
//   }
//     g.printAdjList();
// }

// Q1) Graph Implementation:

// vector < vector < int >> printAdjacency(int n, int m, vector < vector < int
// >> & edges) {
//     vector<int> ans[n];
//     for(int i=0 ; i<m ; i++){

//         int u=edges[i][0];
//         int v=edges[i][1];

//         //Un-directed graph
//         ans[u].push_back(v);
//         ans[v].push_back(u);

//     }
//     vector<vector<int>> adj(n);

//     for(int i=0 ; i<n ; i++){
//         adj[i].push_back(i);

//     //Neighbours:
//     for(int j=0 ; j<ans[i].size() ; j++){
//         adj[i].push_back(ans[i][j]);
//         }
//     }
//     return adj;
// }
