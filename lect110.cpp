// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <list>
// #include <stack>
// using namespace  std;

// Graphs:

// BELLMAN FORD ALGORITHM:

// Finds: (-) CYCLE  in the graph, and if it's not present then it is: used to
// get the "SHORTEST PATH" in a Directed Graph if (-) WEIGHTS are present.

// Q) Find Shortest Path with - weights;

// int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges)
// {
//     vector<int> dist(n + 1, 1e8);
//     dist[src] = 0;

//     // (n-1) times:
//     for (int i = 1; i <= n; i++) {
//         // Traverse the edge list:
//         for (int j = 0; j < m; j++) {
//             int u = edges[i][0];
//             int v = edges[j][1];
//             int wt = edges[j][2];

//             // Condition:
//             if (dist[u] != 1e8 && (dist[u] + wt < dist[v])) {
//                 dist[v] = dist[u] + wt;
//             }
//         }
//     }
//     // Check for a negative cycle:
//     bool flag = 0;
//     for (int j = 0; j < m; j++) {
//         int u = edges[i][0];
//         int v = edges[j][1];
//         int wt = edges[j][2];

//         // Condition:
//         if (dist[u] != 1e8 && (dist[u] + wt < dist[v])) {
//             flag = 1;
//         }
//     }
//     if (flag == 0) {
//         return dist[dest]; // There is a negative cycle
//     }
//     return -1;
// }
