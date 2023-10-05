// #include <iostream>
// using namespace std;

// Q1) Merge 2 Binary Search Trees:

// Code1:  T.C = O(M+N) , S.C = O(M+N)

// void inorder(TreeNode* root, vector<int> &in) {
//     if (root == NULL) {
//         return;
//     }
//     inorder(root->left, in);
//     in.push_back(root->data);
//     inorder(root->right, in);
// }

// vector<int> mergeArray(vector<int> &a, vector<int> &b) {
//     vector<int> ans(a.size() + b.size());

//     int i = 0;
//     int j = 0;
//     int k = 0;

//     while (i < a.size() && j < b.size()) {
//         if (a[i] < b[j]) {
//             ans[k++] = a[i];
//             i++;
//         }
//         else {
//             ans[k++] = b[j];
//             j++;
//         }
//     }

//     while (i < a.size()) {
//         ans[k++] = a[i];
//         i++;
//     }
//     while (j < b.size()) {
//         ans[k++] = b[j];
//         j++;
//     }
//     return ans;
// }

// TreeNode* inorderToBST(int s, int e, vector<int> &k) {
//     if (s > e) {
//         return NULL;
//     }

//     int mid = (s + e) / 2;
//     TreeNode<int>* root = new TreeNode<int>(k[mid]);
//     root->left = inorderToBST(s, mid - 1, k);
//     root->right = inorderToBST(mid + 1, e, k);
//     return root;
// }

// vector<int> mergeBST(TreeNode *root1, TreeNode *root2) {
//     // 1) Store Inorder:
//     vector<int> bst1, bst2;
//     inorder(root1, bst1);
//     inorder(root2, bst2);

//     // 2) Merge 2 Sorted Arrays:
//     vector<int> mergeArr = mergeArray(bst1, bst2);

//     // 3) inorderToBST:
//     int s = 0;
//     int e = mergeArr.size() - 1;
//     return inorderToBST(s, e, mergeArr);
// }

// Code2: (Short Code) T.C = O(N log N) , S.C = O(M)

// void getInorder(TreeNode *root, vector<int> &ans) {
//   if (root == NULL) {
//     return;
//   }
//   getInorder(root->left, ans);
//   ans.push_back(root->data);
//   getInorder(root->right, ans);
// }
// vector<int> mergeBST(TreeNode *root1, TreeNode *root2) {
//   vector<int> ans1;

//   getInorder(root1, ans1);
//   getInorder(root2, ans1);
//   sort(ans1.begin(), ans1.end());
//   return ans1;
// }
