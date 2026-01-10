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
    bool isPalindrome(ListNode* head) {
        int len = 0;
        stack<int> num;
        ListNode* temp = head;
        while(temp != nullptr){
            len++;
            temp = temp -> next;
        }
        if(len == 1) return true;
        temp = head;
        for(int i=0;i<len/2;i++){
            num.push(temp->val);
            temp = temp -> next;
        }

        if(len % 2 == 1){
            temp = temp->next;
        }

        for(int i=(len+1)/2;i<len;i++){
            if(num.top() == temp -> val){
                num.pop();
                temp = temp -> next;
            }else{
                return false;
            }
        }
        return true;
    }
};
