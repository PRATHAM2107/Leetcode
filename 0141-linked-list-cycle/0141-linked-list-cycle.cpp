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
    bool hasCycle(ListNode *head) {
        ListNode *slow;
        ListNode * fast;
        slow = head;
        fast = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            if(slow==fast)
                return true;
            slow=slow->next;    
        }
        return false;
    }
};