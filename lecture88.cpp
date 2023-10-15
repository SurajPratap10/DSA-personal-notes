#include <iostream>
using namespace std;

// Q1) Longest Common Prefix:

// string longestCommonPrefix(vector<string> &arr, int n){
    
//     string ans = "";
    
//     //traversing 1st string:
//     for(int i = 0; i < arr[0].size(); i++){
//         char ch = arr[0][i];

//     //comparing rest of the strings ch from 1st string:
//         for(int j = 1; j < n; j++){
//             if(arr[j].size() < i || ch != arr[j][i]){
//                 return ans;
//             }
//         }
//         ans = ans + ch;
//     }
//     return ans;
// }


