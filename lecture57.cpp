// #include <iostream>
// using namespace std;

// Q) Clone a Linked List with Random Pointers:

// Method 1: By Map ( Space complexity = O(n)):

// Node* copyRandomList(Node* head) {
//        if(head == NULL){
//            return NULL;
//        }

//        // Create a mapping of original nodes to their corresponding new nodes
//        unordered_map<Node*, Node*> nodeMap;

//        // step:- 1 -> Create new nodes and map them to original nodes
//        Node* current = head;
//        while (current) {
//            nodeMap[current] = new Node(current->val);
//            current = current->next;
//        }

// step:- 2 -> Set next and random pointers for new nodes
//        current = head;
//        while (current) {
//            Node* newNode = nodeMap[current];
//            newNode->next = nodeMap[current->next];
//            newNode->random = nodeMap[current->random];
//            current = current->next;
//        }

//        return nodeMap[head];
//    }

// Method:2 By Changing Links (SC = O(1)):

// class Solution {
// private:
//   void insertAtTail(Node *&head, Node *&tail, int d) {
//     Node *newNode = new Node(d);
//     if (head == NULL) {
//       head = newNode;
//       tail = newNode;
//     } else {
//       tail->next = newNode;
//       tail = newNode;
//     }
//   }

//   void print(Node *head) {
//     while (head != NULL) {
//       cout << head->data << " ";
//       head = head->next;
//     }
//     cout << endl;
//   }

//   void printRandom(Node *head) {
//     while (head != NULL) {
//       cout << " head data: " << head->data << " ";
//       if (head->arb != NULL) {
//         cout << " head random data" << head->arb->data;
//       } else {
//         cout << " head random data: NULL";
//       }
//       head = head->next;
//       cout << endl;
//     }
//   }

// public:
//   Node *copyList(Node *head) {
//     // step 1: Create a Clone List
//     Node *cloneHead = NULL;
//     Node *cloneTail = NULL;

//     Node *temp = head;
//     while (temp != NULL) {
//       insertAtTail(cloneHead, cloneTail, temp->data);
//       temp = temp->next;
//     }

// step 2: insert nodes of Clone List in between originalList

//     Node *originalNode = head;
//     Node *cloneNode = cloneHead;

//     while (originalNode != NULL && cloneNode != NULL) {
//       Node *next = originalNode->next;
//       originalNode->next = cloneNode;
//       originalNode = next;

//       next = cloneNode->next;
//       cloneNode->next = originalNode;
//       cloneNode = next;
//     }

//     // step 3: Random pointer copy
//     originalNode = head;
//     cloneNode = cloneHead;

//     while (originalNode != NULL && cloneNode != NULL) {

//       if (originalNode->arb != NULL) {
//         cloneNode->arb = originalNode->arb->next;
//       } else {
//         cloneNode->arb = NULL;
//       }

//       cloneNode = cloneNode->next;
//       originalNode = originalNode->next;
//     }

//     // step 4: revert step 2 changes
//     Node *original = head;
//     Node *copy = cloneHead;

//     while (original && copy) {
//       original->next = original->next ? original->next->next : original->next;

//  copy->next = copy->next ? copy->next->next : copy->next;
//       original = original->next;
//       copy = copy->next;
//     }

//     // step 5 answer return
//     return cloneHead;
//   }
// };