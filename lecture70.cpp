// #include <iostream>
// using namespace std;

// Binary Tree Questions:

// Q1) Zig-Zag Traversal:

// class Solution {
// public:
//   List<List<Integer>> zigzagLevelOrder(TreeNode root) {
//     List<List<Integer>> result = new LinkedList<List<Integer>>();
//     Queue<TreeNode> q = new LinkedList<TreeNode>();

//     if (root == null)
//       return result;
//     q.offer(root);
//     int curLevel = 0;

//     while (!q.isEmpty()) {
//       List<Integer> innerList = new LinkedList<Integer>();
//       int curSize = q.size();
//       for (int i = 0; i < curSize; i++) {
//         TreeNode curNode = q.poll();
//         if (curNode.left != null)
//           q.offer(curNode.left);
//         if (curNode.right != null)
//           q.offer(curNode.right);
//         innerList.add(curNode.val);
//       }

//       curLevel++;
//       if (curLevel % 2 == 0) {
//         Collections.reverse(innerList);
//       }
//       result.add(innerList);
//     }
//     return result;
//   }
// }

// Q2) Boundary Traversal:

// void traverseLeft(TreeNode<int> *root, vector<int> &ans){
//         //base case
//         if( (root == NULL) || (root->left == NULL && root->right == NULL) )
//             return ;

//         ans.push_back(root->data);
//         if(root->left)
//             traverseLeft(root->left, ans);
//         else
//             traverseLeft(root->right, ans);

//     }

// void traverseLeaf(TreeNode<int> *root, vector<int> &ans){
//         //base case
//         if(root == NULL)
//             return ;

//         if(root->left == NULL && root->right == NULL) {
//             ans.push_back(root->data);
//             return;
//         }

//         traverseLeaf(root->left, ans);
//         traverseLeaf(root->right, ans);

//     }

// void traverseRight(TreeNode<int> *root, vector<int> &ans){
//         //base case
//         if( (root == NULL) || (root->left == NULL && root->right == NULL) )
//             return ;

//         if(root->right)
//             traverseRight(root->right, ans);
//         else
//             traverseRight(root->left, ans);

//         //wapas aagye
//         ans.push_back(root->data);

//     }

// vector<int> traverseBoundary(TreeNode<int> *root)
//     {
//         vector<int> ans;
//         if(root == NULL)
//             return ans;

//         ans.push_back(root->data);

//         //left part print/store
//         traverseLeft(root->left, ans);

//         //traverse Leaf Nodes

//         //left subtree
//         traverseLeaf(root->left, ans);
//         //right subtree
//         traverseLeaf(root->right, ans);

//         //traverse right part
//         traverseRight(root->right, ans);

//         return ans;

//     };

// Q3) Vertical Order Traversal:

// vector<vector<int>> verticalTraversal(TreeNode *root) {

//   map<int, map<int, vector<int>>> nodes;
//   queue<pair<TreeNode *, pair<int, int>>> q;
//   vector<vector<int>> ans;

//   if (root == NULL) {
//     return ans;
//   }

//   q.push(make_pair(root, make_pair(0, 0)));

//   while (!q.empty()) {
//     pair<TreeNode *, pair<int, int>> temp = q.front();
//     q.pop();
//     TreeNode *frontNode = temp.first;

//     int hd = temp.second.first;
//     int lvl = temp.second.second;

//     if (frontNode->left) {
//       q.push(make_pair(frontNode->left, make_pair(hd - 1, lvl + 1)));
//     }
//     if (frontNode->right) {
//       q.push(make_pair(frontNode->right, make_pair(hd + 1, lvl + 1)));
//     }

//     // Store the node values in the 'nodes' map
//     nodes[hd][lvl].push_back(frontNode->val);
//   }
//   for (auto i : nodes) {
//     vector<int> levelNodes;
//     for (auto j : i.second) {
//       // Sort the nodes at the same vertical line by their values
//       sort(j.second.begin(), j.second.end());
//       // Concatenate the vectors within the map
//       levelNodes.insert(levelNodes.end(), j.second.begin(), j.second.end());
//     }
//     // Push the concatenated vector into 'ans'
//     ans.push_back(levelNodes);
//   }

//   return ans;
// }

// Q4) Top-View of a Binary Tree:

// #include <vector>
// #include <map>
// #include <queue>

// vector<int> getTopView(TreeNode<int>* root)
// {
//     vector<int> ans;

//     if (root == NULL) {
//         return ans;
//     }

//     map<int, int> topNode;
//     queue<pair<TreeNode<int>*, int>> q;

//     q.push(make_pair(root, 0));

//     while (!q.empty()) {
//         pair<TreeNode<int>*, int> temp = q.front();
//         q.pop();
//         TreeNode<int>* frontNode = temp.first;
//         int hd = temp.second;

//         // If one value is present for a HD, then do nothing
//         if (topNode.find(hd) == topNode.end())
//             topNode[hd] = frontNode->data;

//         if (frontNode->left)
//             q.push(make_pair(frontNode->left, hd - 1));
//         if (frontNode->right)
//             q.push(make_pair(frontNode->right, hd + 1));
//     }

//     for (auto i : topNode) {
//         ans.push_back(i.second);
//     }
//     return ans;
// }

// Q5) Bottom-View of a Binary Tree:

// Same code as Top-View , just remove:

// if (topNode.find(hd) == topNode.end())


// Q6) Left-View of a Binary Tree:

// void solve(TreeNode<int>* root, vector<int> &ans, int level) {
//     //base case
//     if(root == NULL)
//         return ;

//     //we entered into a new level
//     if(level == ans.size())
//         ans.push_back(root->data);

//     solve(root->left, ans, level+1);
//     solve(root->right, ans, level+1);
// }
// vector<int> getLeftView(TreeNode<int> *root)
// {
//     vector<int> ans;
//     solve(root, ans, 0);
//     return ans;
// }


// Q6) Right-View of a Binary Tree:


// same code as Left-View , just swap position of R->L

//     solve(root->right, ans, level+1);
//     solve(root->left, ans, level+1);
