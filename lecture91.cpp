// #include <iostream>
// using namespace std;

// BackTracking:

// Q1) N - QUEENS:

// void addSolution(vector<vector<int>>& board, vector<vector<int>>& ans, int
// n){
//   vector<int> temp;
//   for(int i = 0; i < n; i++){
//     for(int j = 0; j < n; j++){
//       temp.push_back(board[i][j]);
//     }
//   }
//   ans.push_back(temp);
// }

// bool isSafe(int row, int col, vector<vector<int>>& board, int n) {
//     int x = row;
//     int y = col;

//     // Check for the same row:
//     while (y >= 0) {
//         if (board[x][y] == 1) {
//             return false;
//         }
//         y--; // Decrement y here
//     }

//     // Check for diagonal up:
//     x = row;
//     y = col;
//     while (x >= 0 && y >= 0) {
//         if (board[x][y] == 1) {
//             return false;
//         }
//         x--; // Decrement x and y here
//         y--;
//     }

//   // Check for diagonal up:
//     x = row;
//     y = col;
//     while (x < n && y >= 0) {
//         if (board[x][y] == 1) {
//             return false;
//         }
//         x++; // Increment x and decrement y here
//         y--;
//     }

//     return true;
// }

// void solve(int col, vector<vector<int>>& ans, vector<vector<int>>& board, int
// n){
//   //base case:(fully filled)
//   if(col == n){
//     addSolution(board, ans, n);
//     return;
//   }
//   //Solve 1 case and rest leave for recursion:
//   for(int row = 0; row < n; row++){
//     if(isSafe(row,col,board,n)){
//       //Check for placing queen isSafe or not:
//       board[row][col] = 1;  // 1 shows adding of queen
//       solve(col+1,ans,board,n);

//       //Backtracking:
//       board[row][col] = 0; // 0 shows removal of queen
//     }
//   }
// }
// vector<vector<int>> nQueens(int n){
//   vector<vector<int>> board(n, vector<int>(n,0));
//   vector<vector<int>> ans;

//   int column = 0;
//   solve(column, ans, board, n);
//   return ans;
// }
