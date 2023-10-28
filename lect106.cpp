// #include <iostream>
// #include <unordered_map>
// #include <list>
// #include <queue>
// using namespace  std;

// Graphs:

// KRUSKAL'S Algorithm:

// bool cmp(vector<int> &a, vector<int> &b){
//     return a[2] < b[2];
// }
// void makeSet(vector<int> &parent, vector<int> &rank, int n){
//     for(int i = 0; i < n; i++){
//       parent[i] = i; //parent of itself only.
//       rank[i] = 0;  //all ranks 0 initally
//     }
// }
// int findParent(vector<int> &parent, int node){
//     if(parent[node] == node){
//       return node;
//     }
//     return parent[node] = findParent(parent, parent[node]);
// }
// void unionSet(int u, int v, vector<int> &parent, vector<int> &rank){
//     u = findParent(parent, u);
//     v = findParent(parent, v);

//     if(rank[u] < rank[v]){
//       parent[u] = v;
//     }
//     else if(rank[v] < rank[u]){
//       parent[v]  = u;
//     }
//     else{
//       //when -> (rank[u] == rank[v])
//       parent[v] = u;
//       rank[u]++;
//     }
// }
// int minimumSpanningTree(vector<vector<int>>& edges, int n){
//     sort(edges.begin(), edges.end(), cmp);
//     int minWeight = 0;

//     vector<int> parent(n);
//     vector<int> rank(n);
//     makeSet(parent, rank, n);
//  
//    KRUSKAL'S ALGO:
//
//     for(int i = 0; i < edges.size(); i++){
//       int u = findParent(parent, edges[i][0]);
//       int v = findParent(parent, edges[i][1]);
//       int weight = edges[i][2];

//       if(u != v){
//         minWeight += weight;
//         unionSet(u, v, parent, rank);
//       }
//     }
//     return minWeight;
// }
