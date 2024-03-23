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
    
    ListNode * reorderList(ListNode *head, int len){
    if(len == 0)
        return NULL;
    if( len == 1 )
        return head;
    if( len == 2 )
        return head->next;
    ListNode * tail = reorderList(head->next, len-2);
    ListNode * tmp = tail->next;
    tail->next = tail->next->next;
    tmp->next = head->next;
    head->next = tmp;
    return tail;
}

void reorderList(ListNode *head) {  //recursive
    ListNode  * tail = NULL;
    ListNode *tmp = head;
    int len =0;
    ListNode *pre = NULL;
    while (tmp->next) 
    {
      len++;
        tmp = tmp->next;   
    }
    tail = reorderList(head, len+1);
}
    
};