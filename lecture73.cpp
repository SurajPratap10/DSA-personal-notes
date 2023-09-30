// #include <iostream>
// using namespace std;

// Q1) Minimum Time to Burn a Tree:

// class Solution {
// public:
//     TreeNode* createParentMapping(TreeNode* root, int start, map<TreeNode*,
//     TreeNode*>& nodeToParent) {
//         TreeNode* result = NULL;
//         queue<TreeNode*> q;
//         q.push(root);
//         nodeToParent[root] = NULL;

//         while (!q.empty()) {
//             TreeNode* front = q.front();
//             q.pop();
//             if (front->val == start) {
//                 result = front;
//             }
//             if (front->left) {
//                 nodeToParent[front->left] = front;
//                 q.push(front->left);
//             }
//             if (front->right) {
//                 nodeToParent[front->right] = front;
//                 q.push(front->right);
//             }
//         }
//         return result;
//     }

//     int burnTree(TreeNode* root, map<TreeNode*, TreeNode*>& nodeToParent) {
//         map<TreeNode*, bool> visited;
//         queue<TreeNode*> q;
//         q.push(root);
//         visited[root] = true;
//         int ans = 0;

//         while (!q.empty()) {
//             bool flag = false;
//             int size = q.size();

//             for (int i = 0; i < size; i++) {
//                 TreeNode* front = q.front();
//                 q.pop();

//                 if (front->left && !visited[front->left]) {
//                     flag = true;
//                     q.push(front->left);
//                     visited[front->left] = true;
//                 }
//                 if (front->right && !visited[front->right]) {
//                     flag = true;
//                     q.push(front->right);
//                     visited[front->right] = true;
//                 }
//                 if (nodeToParent[front] && !visited[nodeToParent[front]]) {
//                     flag = true;
//                     q.push(nodeToParent[front]);
//                     visited[nodeToParent[front]] = true;
//                 }
//             }
//             if (flag) {
//                 ans++;
//             }
//         }
//         return ans;
//     }

//     int amountOfTime(TreeNode* root, int start) {
//         map<TreeNode*, TreeNode*> nodeToParent;
//         TreeNode* targetNode = createParentMapping(root, start,
//         nodeToParent); int ans = burnTree(targetNode, nodeToParent); return
//         ans;
//     }
// };
