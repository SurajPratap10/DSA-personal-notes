// #include <iostream>
// using namespace std;

// BINARY TREES:

// Creation of Binary Tree and Types of Traversals:

// class node {
//     public:
//         int data;
//         node* left;
//         node* right;

//     node(int d) {
//         this -> data = d;
//         this -> left = NULL;
//         this -> right = NULL;
//     }
// };

// node* buildTree(node* root) {

//     cout << "Enter the data: " << endl;
//     int data;
//     cin >> data;
//     root = new node(data);

//     if(data == -1) {
//         return NULL;
//     }

//     cout << "Enter data for inserting in left of " << data << endl;
//     root->left = buildTree(root->left);
//     cout << "Enter data for inserting in right of " << data << endl;
//     root->right = buildTree(root->right);
//     return root;

// }

// void levelOrderTraversal(node* root) {
//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);

//     while(!q.empty()) {
//         node* temp = q.front();
//         q.pop();

//         if(temp == NULL) {
//             //purana level complete traverse ho chuka hai
//             cout << endl;
//             if(!q.empty()) {
//                 //queue still has some child ndoes
//                 q.push(NULL);
//             }
//         }
//         else{
//             cout << temp -> data << " ";
//             if(temp ->left) {
//                 q.push(temp ->left);
//             }

//             if(temp ->right) {
//                 q.push(temp ->right);
//             }
//         }
//     }

// }

// void inorder(node* root) {
//     //base case
//     if(root == NULL) {
//         return ;
//     }

//     inorder(root->left);
//     cout << root-> data << " ";
//     inorder(root->right);

// }

// void preorder(node* root) {
//     //base case
//     if(root == NULL) {
//         return ;
//     }

//     cout << root-> data << " ";
//     preorder(root->left);
//     preorder(root->right);

// }

// void postorder(node* root) {
//     //base case
//     if(root == NULL) {
//         return ;
//     }

//     postorder(root->left);
//     postorder(root->right);
//     cout << root-> data << " ";

// }

// void buildFromLevelOrder(node* &root) {
//     queue<node*> q;

//     cout << "Enter data for root" << endl;
//     int data ;
//     cin >> data;
//     root = new node(data);

//     q.push(root);

//     while(!q.empty()) {
//         node* temp = q.front();
//         q.pop();

//         cout << "Enter left node for: " << temp->data << endl;
//         int leftData;
//         cin >> leftData;

//         if(leftData != -1) {
//             temp -> left = new node(leftData);
//             q.push(temp->left);
//         }

//         cout << "Enter right node for: " << temp->data << endl;
//         int rightData;
//         cin >> rightData;

//         if(rightData != -1) {
//             temp -> right = new node(rightData);
//             q.push(temp->right);
//         }
//     }
//  }

// int main() {

//     node* root = NULL;

//     buildFromLevelOrder(root);
//     levelOrderTraversal(root);
// 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

/*
//creating a Tree
root = buildTree(root);
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//level order
cout << "Printing the level order tracersal output " << endl;
levelOrderTraversal(root);

cout << "inorder traversal is:  ";
inorder(root);

cout << endl << "preorder traversal is:  ";
preorder(root);

cout << endl << "postorder traversal is:  ";
postorder(root);
*/

//     return 0;
// }

// Q) In-Order Traversal:

// void inorder(TreeNode* root, vector<int> &ans) {
//     if (root == NULL) {
//         return;
//     }
//     inorder(root->left, ans);
//     ans.push_back(root->data);
//     inorder(root->right, ans);
// }

// vector<int> getInOrderTraversal(TreeNode *root) {
//     vector<int> ans;
//     inorder(root, ans);
//     return ans;
// }

// Q) Pre-Order Traversal:

//  void preorder(TreeNode* root, vector<int> &ans) {
//     if (root == NULL) {
//         return;
//     }
//     ans.push_back(root->val);
//     preorder(root->left, ans);
//     preorder(root->right, ans);
// }

//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         preorder(root,ans);
//         return ans;
//     }
// };

// Q) Post-Order Traversal:

//   void postorder(TreeNode* root, vector<int> &ans) {
//     if (root == NULL) {
//         return;
//     }
//     postorder(root->left, ans);
//     postorder(root->right, ans);
//     ans.push_back(root->val);
// }

//   vector<int> postorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         postorder(root,ans);
//         return ans;
//     }

// Q) Level Order Traversal:

// class Solution {
// public:
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>> result; // To store the level order traversal
//         if (root == NULL) {
//             return result; // Return an empty vector for an empty tree
//         }

//         queue<TreeNode*> q;
//         q.push(root);
//         q.push(NULL);

//         vector<int> currentLevel; // To store nodes at the current level

//         while (!q.empty()) {
//             TreeNode* temp = q.front();
//             q.pop();

//             if (temp == NULL) {
//                 result.push_back(currentLevel); // Add the nodes at the
//                 current level to the result currentLevel.clear(); // Clear
//                 the level vector for the next level

//                 if (!q.empty()) {
//                     q.push(NULL);
//                 }
//             } else {
//                 currentLevel.push_back(temp->val); // Add the node's value to
//                 the current level vector

//                 if (temp->left) {
//                     q.push(temp->left);
//                 }
//                 if (temp->right) {
//                     q.push(temp->right);
//                 }
//             }
//         }

//         return result; // Return the level order traversal result
//     }
// };

// Q) Level Order Traversal ( Bottom to Top):

// Just add the end:

// reverse(result.begin(), result.end());
// return result;

// Q) Count Leaf Nodes:

// void inorder(BinaryTreeNode<int>* root, int &count) {
//     if (root == NULL) {
//         return;
//     }
//     inorder(root->left, count);

//     // Leaf Node:
//     if(root->left == NULL && root->right == NULL){
//         count++;
//     }

//     inorder(root->right, count);
// }

// int noOfLeafNodes(BinaryTreeNode<int> *root){
//     int count = 0;
//     inorder(root, count);
//     return count;
// }
