/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        if(node == nullptr) return;
        ListNode* dnode = node->next;
        if (dnode == nullptr) {
            delete node;
            return;
        }
        node->val = dnode->val;
        node -> next = dnode -> next;
        delete dnode;
    }
};

