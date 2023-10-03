// #include <iostream>
// using namespace std;

// Binary Search Trees (BST):

// Q1) Insert In BST:

// Node* insertBST(Node* root, int val){
//   //base case:
//   if(root == NULL){
//     root = new Node(val);
//     return root;
//   }

//   if(val > root->val){
//     root->right = insertBST(root->right, val);
//   }
//   else{
//     root->left = insertBST(root->left, val);
//   }
//   return root;
// }

// T.C of INSERTION is :- O(logn)

// Q2) Search a Node in BST:

// TreeNode *searchBST(TreeNode *root, int val) {
//   // base case:
//   if (root == NULL) {
//     return NULL;
//   }
//   if (val == root->val) {
//     return root;
//   } else if (val > root->val) {
//     // right part insertion:
//     return searchBST(root->right, val);
//   } else {
//     // left part insertion:
//     return searchBST(root->left, val);
//   }
//   return root;
// }

// Q3) Minimum element in BST:

// int minVal(Node* root){
// 	if(root == NULL){
// 		return -1;
// 	}
// 	while(root->left != NULL){
// 		root = root->left;
// 	}

//     return root->data;
// }

// similar for Maximum value just do left to right...

// Q4) Delete Node in BST:

// class Solution {
// public:
//     TreeNode* findminval(TreeNode* root){
//     if(root==NULL)return root;
//     while(root->left!=NULL){
//         root=root->left;
//     }
//     return root;
// }
//     TreeNode* deleteNode(TreeNode* root, int key) {
//         if(root==NULL){
//             return NULL;
//         }
//         if(root->val==key){
//             // 0 child:
//             if(root->left==NULL && root->right==NULL){
//                 delete root;
//                 return NULL;
//             }
//             if(root->left!=NULL && root->right==NULL){
//                 // 1 child:
//                 TreeNode* temp=root->left;
//                 delete root;
//                 return temp;
//             }
//             if(root->right!=NULL && root->left==NULL){
//                 TreeNode* temp=root->right;
//                 delete root;
//                 return temp;
//             }
//             if(root->right!=NULL && root->left!=NULL){
//                 // 2 childs:
//                 int minimum= findminval(root->right)->val;
//                 root->val=minimum;
//                 root->right=deleteNode(root->right,minimum);
//                 return root;
//             }
//         }
//         else if(root->val>key){
//         root->left=deleteNode(root->left,key);
//         return root;
//     }
//     else{
//         root->right=deleteNode(root->right,key);
//         return root;
//     }
//     return root;
//     }
// };
