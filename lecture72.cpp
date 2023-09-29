// #include <iostream>
// using namespace std;

// Q1) Construct a Binary Tree by: Inorder/Preorder traversal:

// class Solution {
// public:
//     int findIndex(vector<int> &inorder, int element, int n) {
//         for (int i = 0; i < n; i++) {
//             if (inorder[i] == element)
//                 return i;
//         }
//         return -1;
//     }

//     TreeNode* solve(vector<int> &preorder, vector<int> &inorder, int
//     &preIndex, int inorderStart, int inorderEnd, int n) {
//         if (preIndex >= n || inorderStart > inorderEnd) {
//             return NULL;
//         }

//         int element = preorder[preIndex++];
//         TreeNode* root = new TreeNode(element);
//         int position = findIndex(inorder, element, n);

//         root->left = solve(preorder, inorder, preIndex, inorderStart,
//         position - 1, n); root->right = solve(preorder, inorder, preIndex,
//         position + 1, inorderEnd, n);

//         return root;
//     }

//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//         int preOrderIndex = 0;
//         int n = inorder.size();
//         TreeNode* root = solve(preorder, inorder, preOrderIndex, 0, n - 1,
//         n); return root;
//     }
// };

// Q2) Construct a Binary Tree by: Inorder/Postorder traversal:

// class Solution {
// public:
// int findIndex(vector<int> &inorder, int element, int n) {
//         for (int i = 0; i < n; i++) {
//             if (inorder[i] == element)
//                 return i;
//         }
//         return -1;
//     }

// TreeNode* solve(vector<int> &inorder, vector<int> &postorder, int &preIndex,
// int inorderStart, int inorderEnd, int n) {
//         if (preIndex < 0 || inorderStart > inorderEnd) {
//             return NULL;
//         }

//         int element = postorder[preIndex--];
//         TreeNode* root = new TreeNode(element);
//         int position = findIndex(inorder, element, n);

//         root->right = solve(inorder, postorder, preIndex, position + 1,
//         inorderEnd, n); root->left = solve(inorder, postorder, preIndex,
//         inorderStart, position - 1, n);

//         return root;
//     }
//     TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
//         int n = inorder.size();
//         int postOrderIndex = n-1;
//         TreeNode* root = solve(inorder, postorder, postOrderIndex, 0, n - 1,
//         n); return root;
//     }
// };
