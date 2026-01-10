/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int len = 0;
        while(temp != nullptr) {
            len++;
            temp = temp -> next;
        }
        temp = head;
        if(len == 1) return nullptr;
        for(int i=0;i< len/2 - 1; i++){
            temp = temp -> next;
        }
        ListNode* dnode = temp -> next;
        temp -> next = dnode -> next;
        delete dnode;
        return head;
    }
};
