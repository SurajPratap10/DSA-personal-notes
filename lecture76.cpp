// #include <iostream>
// using namespace std;

// BST Interview Questions:

// Q1) Validate BST:

// bool isBST(TreeNode* root, int min, int max){
//         if(root == NULL){
//             return true;
//         }
//         if(root->val >= min && root->val <= max){
//             bool left = isBST(root->left, min, root->val);
//             bool right = isBST(root->right,root->val, max);
//         }
//         else{
//             return false;
//         }
//         return root;
//     }
//     bool isValidBST(TreeNode* root) {
//         return isBST(root, INT_MIN, INT_MAX);
//     }

// Q2) Kth Smallest Element In BST:

// int solve(TreeNode* root, int & i, int k){
//        if(root == NULL){
//            return -1;
//        }
//        //L
//        int left = solve(root->left, i, k);
//        if(left != -1){
//            return left;
//        }
//        //N
//        i++;
//        if(i == k){
//            return root->val;
//        }
//        //R
//        else{
//            return solve(root->right, i, k);
//        }
//    }
//    int kthSmallest(TreeNode* root, int k) {
//        int i = 0;
//        int ans = solve(root, i, k);
//        return ans;
//    }

// Q3) Predecessor And Successor In BST:

// pair<int, int> predecessorSuccessor(TreeNode *root, int key){
//     TreeNode * temp = root;
//     int pred = -1;
//     int succ = -1;

//     while(temp!=NULL && temp->data!=key){
//         if(temp->data>key){
//             succ = temp->data;
//             temp = temp->left;
//         }
//         else{
//             pred = temp->data;
//             temp = temp->right;
//         }
//     }
//     if(temp!=NULL){
//     //predecessor
//     TreeNode * lefttree = temp->left;
//     while(lefttree!=NULL){
//         pred = lefttree->data;
//         lefttree = lefttree->right;
//     }

//     //succesor
//     TreeNode * righttree = temp->right;
//     while (righttree != NULL) {
//         succ = righttree->data;
//         righttree = righttree->left;
//     }
// }
//     pair<int,int> ans = make_pair(pred,succ);
//     return ans;
// }

// Q4) LCA In BST:
