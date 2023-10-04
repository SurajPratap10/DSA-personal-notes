// #include <iostream>
// using namespace std;

// BST Questions:

// Q1) 2 SUM in a BST:

// void inorder(TreeNode *root, vector<int> &k) {
//   if (root == NULL) {
//     return;
//   }

//   inorder(root->left, k);
//   k.push_back(root->val);
//   inorder(root->right, k);
// }
// bool findTarget(TreeNode *root, int k) {
//   vector<int> inorderVal;
//   // stores sorted value of Inorder:
//   inorder(root, inorderVal);

//   // 2 pointer approach:
//   int i = 0;
//   int j = inorderVal.size() - 1;

//   while (i < j) {
//     int sum = inorderVal[i] + inorderVal[j];
//     if (sum == k) {
//       return true;
//     } else if (sum > k) {
//       j--;
//     } else {
//       i++;
//     }
//   }
//   return false;
// };

// Q2) Flatten a BST to Sorted Linked List:

// void inorder(BinaryTreeNode<int>* root, vector<int> &k){
//         if(root == NULL){
//             return;
//         }

//         inorder(root->left, k);
//         k.push_back(root->data);
//         inorder(root->right, k);
//     }
// bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
// 	vector<int> inorderVal;
//         // stores sorted value of Inorder:
//         inorder(root, inorderVal);

//         // 2 pointer approach:
//         int i = 0;
//         int j = inorderVal.size() - 1;

//         while(i<j){
//             int sum = inorderVal[i] + inorderVal[j];
//             if(sum == target){
//                 return true;
//             }
//             else if(sum > target){
//                 j--;
//             }
//             else{
//                 i++;
//             }
//         }
//         return false;
//     }

// Q3) Normal BST to Balanced BST:

// void inorder(TreeNode *root, vector<int> &k) {
//   if (root == NULL) {
//     return;
//   }
//   inorder(root->left, k);
//   k.push_back(root->val);
//   inorder(root->right, k);
// }
// TreeNode *inorderToBST(int s, int e, vector<int> &k) {
//   if (s > e) {
//     return NULL;
//   }
//   int mid = (s + e) / 2;
//   TreeNode *root = new TreeNode(k[mid]);
//   root->left = inorderToBST(s, mid - 1, k);
//   root->right = inorderToBST(mid + 1, e, k);
//   return root;
// }
// TreeNode *balanceBST(TreeNode *root) {
//   vector<int> inorderVal;
//   inorder(root, inorderVal);

//   return inorderToBST(0, inorderVal.size() - 1, inorderVal);
// };

// Q4) BST from PreOrder:

// TreeNode *solve(vector<int> &preorder, int mini, int maxi, int &i) {
//   // base cases:
//   if (i >= preorder.size()) { // out of array
//     return NULL;
//   }
//   if (preorder[i] < mini || preorder[i] > maxi) { // out of range
//     return NULL;
//   }

//   TreeNode *root = new TreeNode(preorder[i++]);
//   root->left = solve(preorder, mini, root->val, i);
//   root->right = solve(preorder, root->val, maxi, i);
//   return root;
// }

// TreeNode *bstFromPreorder(vector<int> &preorder) {
//   int mini = INT_MIN;
//   int maxi = INT_MAX;
//   int i = 0;
//   return solve(preorder, mini, maxi, i);
// };
