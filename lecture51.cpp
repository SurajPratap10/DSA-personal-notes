// #include <iostream>
// using namespace std;


// Q1) Reverse Nodes in K-groups in a LL:

    // ListNode* reverseKGroup(ListNode* head, int k) {
    // int size=0;
    // ListNode*temp=head;

    // while(temp!=NULL){
    //     temp=temp->next;
    //     size++;
    // }
    // if(size<k){
    //     return head;       
    // }
    
    // //base case:
    // if(head == NULL){
    //     return NULL;
    // }

    // //Reverse first K Nodes in the LL:
    // ListNode* fwd = NULL;
    // ListNode* curr = head;
    // ListNode* prev  = NULL;
    // int count = 0;

    // while(curr != NULL && count<k){
    //     fwd = curr->next;
    //     curr->next = prev;
    //     prev = curr;
    //     curr = fwd;
    //     count++;
    // }

    // //Recusrion of reversing rest of the Nodes in the LL:
    // if(fwd != NULL){
    //     head->next = reverseKGroup(fwd, k);
    // }

    // //Return head of the reversed LL:
    // return prev;
    // }


// Q2) Circular LL?

// bool isCircualr(Node* head){
//   if(head==NULL){
//     return true;
//   }

//   Node* temp = head->next;
//   while(temp!=head && temp!=NULL){
//     temp = temp->next;
//   }
//   if(temp == head){
//     return true;
//   }
//   return false;
// }