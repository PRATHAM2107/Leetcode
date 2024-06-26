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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;

        ListNode* h2 = reverseList(head->next);
        head->next->next = head;
        head->next=NULL;
        return h2;
        // ListNode *pre, *cur, *post;
        // pre=NULL;
        // cur=head;
        // post= cur->next;
        // while(cur->next!= NULL)
        // {
        //     cur->next=pre;
        //     pre=cur;
        //     cur=post;
        //     post=post->next;
        // }
        // cur->next=pre;
        // return cur;

    }
};