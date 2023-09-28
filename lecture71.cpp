// #include <iostream>
// using namespace std;

// Q1) Longest Bloodline Sum (Root->Leaf):

// void solve(Node *root, int sum, int &maxSum, int len, int &maxLen) {
//   // base case
//   if (root == NULL) {

//     if (len > maxLen) {
//       maxLen = len;
//       maxSum = sum;
//     } else if (len == maxLen) {
//       maxSum = max(sum, maxSum);
//     }
//     return;
//   }

//   sum = sum + root->data;

//   solve(root->left, sum, maxSum, len + 1, maxLen);
//   solve(root->right, sum, maxSum, len + 1, maxLen);
// }
// int longestPath(Node *root) {
//   int len = 0;
//   int maxLen = 0;

//   int sum = 0;
//   int maxSum = INT_MIN;

//   solve(root, sum, maxSum, len, maxLen);

//   return maxSum;
// }

// Q2) LCA of a Tree:

// TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
//   if (root == NULL) {
//     return NULL;
//   }
//   if (root->val == p->val || root->val == q->val) {
//     return root;
//   }

//   TreeNode *leftAns = lowestCommonAncestor(root->left, p, q);
//   TreeNode *rightAns = lowestCommonAncestor(root->right, p, q);

//   if (leftAns != NULL && rightAns != NULL) {
//     return root;
//   } else if (leftAns != NULL && rightAns == NULL) {
//     return leftAns;
//   } else if (leftAns == NULL && rightAns != NULL) {
//     return rightAns;
//   } else {
//     return NULL;
//   }
// }

// Q3) K-sum paths:

// void solve(TreeNode *root, int targetSum, int &count, vector<int> path) {
//   if (root == NULL) {
//     return;
//   }

//   path.push_back(root->val);

//   solve(root->left, targetSum, count, path);
//   solve(root->right, targetSum, count, path);

//   // check for k-sum:
//   int i = INT_MIN;
//   int size = path.size();
//   long long sum = 0;

//   for (int i = size - 1; i >= 0; i--) {
//     sum += path[i];
//     if (sum == targetSum) {
//       count++;
//     }
//   }

//   path.pop_back();
// }
// int pathSum(TreeNode *root, int targetSum) {
//   vector<int> path;
//   int count = 0;
//   solve(root, targetSum, count, path);
//   return count;
// }
// }
// ;

// Q4) Kth Ancestor of a Binary Tree:

// Node *solve(Node *root, int &k, int node) {
//   // base case
//   if (root == NULL)
//     return NULL;

//   if (root->data == node) {
//     return root;
//   }

//   Node *leftAns = solve(root->left, k, node);
//   Node *rightAns = solve(root->right, k, node);

//   // wapas
//   if (leftAns != NULL && rightAns == NULL) {
//     k--;
//     if (k <= 0) {
//       // answer lock
//       k = INT_MAX;
//       return root;
//     }
//     return leftAns;
//   }

//   if (leftAns == NULL && rightAns != NULL) {
//     k--;
//     if (k <= 0) {
//       // answer lock
//       k = INT_MAX;
//       return root;
//     }
//     return rightAns;
//   }
//   return NULL;
// }
// int kthAncestor(Node *root, int k, int node) {
//   Node *ans = solve(root, k, node);
//   if (ans == NULL || ans->data == node)
//     return -1;
//   else
//     return ans->data;
// }


// Q5) Max Sum of Non-Adjacent Nodes:
