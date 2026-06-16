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
        ListNode* slow=head;
        ListNode* fast=head;
        vector<int>stack;
        while(fast!=NULL&&fast->next!=NULL){
            stack.push_back(slow->val);
            slow=slow->next;
            fast=fast->next->next;
            
        }
         if (fast != NULL) {
            slow = slow->next;
        }
        int i=stack.size()-1;
        while(slow!=NULL){
            if(slow->val!=stack[i])return false;
            slow=slow->next;
            i--;
        }
        return true;
    }
};