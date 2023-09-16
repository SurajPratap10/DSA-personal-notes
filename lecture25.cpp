// #include <iostream>
// using namespace std;

// 2D ARRAYS:

// int main() {

//   // array defined

//   // int arr[3][4];
//   // int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333,
//   3333}};

//   // taking input
//   for (int i = 0; i < 3; i++) {
//     for (int j = 0; j < 4; j++) {

//       // cin >> arr[i][j];
//     }
//   }

//   // printing output
//   for (int i = 0; i < 3; i++) {
//     for (int j = 0; j < 4; j++) {

//       cout << arr[i][j] << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

// Search in 2D Array:

// bool isPresent(int arr[3][4], int i, int j, int target){
//   for(int i = 0; i<3; i++){
//     for(int j = 0; j<4; j++){
//       if(arr[i][j] == target){
//         return 1;
//       }
//     }
//     return 0;
//   }
// }

// Q) Row-wise Sum:

// void printSum(int arr[3][4], int i, int j){
//   for(int i=0; i<3; i++){
//     int sum = 0;
//     for(int j =0; j<3; j++){
//       sum += arr[row][col];
//     }
//     cout<<sum<<" ";
//   }
//   cout<<endl;
// }

// Q) Largest Row Sum:

// int largestSum(int arr[3][3], int row, int col){
//   int maxi = INT_MIN;
//   int rowIndex = -1;
//     for(int i=0; i<3; i++){
//     int sum = 0;
//     for(int j =0; j<3; j++){
//       sum += arr[row][col];
//     }
//       if(sum>maxi){
//         maxi = sum;
//         rowIndex = row;
//       }
//     }
//       return rowIndex;
//   }
// }

// Q) Print like a WAVE:

// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
// {
//     vector<int> ans;

//     for(int col = 0; col<mCols; col++){
//         if(col&1){
//         //  ODD INDEX - bottom to top
//         for(int row = nRows - 1; row>=0; row--){
//             ans.push_back(arr[row][col]);
//             }
//         }
//         else{
//         //  EVEN INDEX - top tp bottom
//         for(int row = 0; row<nRows; row++){
//             ans.push_back(arr[row][col]);
//             }
//         }
//     }
//     return ans;
// }


// Q) SPIRAL PRINT:

// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
//         vector<int> ans;

//         int row = matrix.size();
//         int col = matrix[0].size();

//         int total = row * col;
//         int count = 0;

//         // initialise the indexes;
//         int startRow = 0;
//         int endCol = col - 1;
//         int endRow = row - 1;
//         int startCol = 0;

//         while(count < total){

//             //print startRow
//             for(int idx = startCol; count < total && idx <= endCol; idx++){
//                 ans.push_back(matrix[startRow][idx]);
//                 count++;
//             }
//             startRow++;

//             // print lastCol
//             for(int idx = startRow; count < total && idx <= endRow; idx++){
//                 ans.push_back(matrix[idx][endCol]);
//                 count++;
//             }
//             endCol--;

//             // print lastRow

//             for(int idx = endCol; count < total && idx >= startCol; idx--){
//                 ans.push_back(matrix[endRow][idx]);
//                 count++;
//             }
//             endRow--;

//             // print firstCol

//             for(int idx = endRow; count < total && idx >= startRow; idx--){
//                 ans.push_back(matrix[idx][startCol]);
//                 count++;
//             }
//             startCol++;
//         }

//         return ans;
//     }
// };


// Q) Search in 2D Array I :

    // bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
    //     int row = matrix.size();
    //     int col = matrix[0].size();

    //     int s = 0;
    //     int e = row*col - 1;

    //     int mid = s + (e-s)/2;

    //     while(s<=e){

    //     // IMPORTANT CONDITION
    //         int element = matrix[mid/col][mid%col];

    //         if(element == target){
    //             return 1;
    //         }
    //         if(element < target){
    //             s = mid + 1;
    //         }
    //         else{
    //             e = mid - 1;
    //         }

    //         mid = s + (e-s)/2;
    //     }
    //     return 0;
    // }


// Q) Search in 2D Array II :

    // bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
    //     int row = matrix.size();
    //     int col = matrix[0].size();

    //     int rowIndex = 0;
    //     int colIndex = col - 1;

    //     while(rowIndex < row && colIndex >=0){

    //         int element = matrix[rowIndex][colIndex];

    //         if(element == target){
    //             return 1;
    //         }
    //         if(element < target){
    //             rowIndex++;
    //         }
    //         else{
    //             colIndex--;
    //         }
    //     }
    //     return 0;
    // }