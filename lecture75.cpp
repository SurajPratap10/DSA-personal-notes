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

