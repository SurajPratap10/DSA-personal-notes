#include <iostream>
using namespace std;

// Binary Treee Questions:

// Q1) Max Depth of Binary Tree:

// int maxDepth(TreeNode *root) {
//   if (root == NULL) {
//     return 0;
//   } else {
//     int left = maxDepth(root->left);
//     int right = maxDepth(root->right);

//     return max(left, right) + 1;
//   }
// };

// Q2) Diameter of Binary Tree:

// T.C = O(n^2) Not Optimized Approach:

// int maxDepth(TreeNode* root) {
//         if(root == NULL){
//             return 0;
//         }
//         else{
//             int left = maxDepth(root->left);
//             int right =  maxDepth(root->right);

//             return  max(left, right) + 1;
//         }
//     }

// int diameter(TreeNode* root){
//   if(root == NULL){
//     return 0;
//   }
//   else{

//     int op1 = diamenter(root->left);
//     int op2 = diameter(root->right);
//     int op3 = maxDepth(root->left) + 1 + maxDepth(root->right);

//     return max(op1, max(op2, op3));
//   }
// }

// Q3) Min Depth of Binary Tree:

// int minDepth(TreeNode *root) {
//   if (root == NULL) {
//     return 0;
//   } else {
//     int left = minDepth(root->left);
//     int right = minDepth(root->right);

//   If left or right subtree is NULL/EMPTY then calculate for other half of
//   tree

// if(left == 0 || right == 0){
//   return left + right + 1;
// }

//     return min(left, right) + 1;
//   }
// };

// Q4) Balanced Binary Tree:

// class Solution {
// public:
// pair<bool, int> isBalancedFast(TreeNode* root) {
//         // base case
//         if(root == NULL)
//         {
//             pair<bool, int> p = make_pair(true, 0);
//             return p;
//         }

//         pair<int,int> left = isBalancedFast(root->left);
//         pair<int,int> right = isBalancedFast(root->right);

//         bool leftAns = left.first;
//         bool rightAns = right.first;

//         bool diff = abs (left.second - right.second ) <=1;

//         pair<bool,int> ans;
//         ans.second = max(left.second, right.second) + 1;

//         if(leftAns && rightAns && diff) {
//            ans.first = true;
//         }
//         else
//         {
//             ans.first = false;
//         }
//         return ans;
//     }
//     bool isBalanced(TreeNode* root) {
//        return isBalancedFast(root).first;
//     }
// };

// Q5) Identical Trees:
