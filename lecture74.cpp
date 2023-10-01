// #include <iostream>
// using namespace std;

// Morris Traversal used as it's S.C = O(1) , where all other traversals have
// S.C = O(N)...

// Q1) Flatten a Binary Tree to Linked List:

// Morris Traversal used as it's O(1):

// void flatten(TreeNode* root) {
//         TreeNode* curr = root;
//         while(curr != NULL){
//             if(curr->left){
//                 TreeNode* pred = curr->left;
//                 while(pred->right){
//                     pred = pred->right;
//                 }
//                 pred->right = curr->right;     // L-R linkage
//                 curr->right = curr->left;     // N-L linkage
//                 curr->left = NULL;           // makes left part of curr null
//             }
//             curr = curr->right;
//         }
//     }
