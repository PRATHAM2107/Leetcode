        // ListNode *pre, *cur, *post;
        return h2;
        // pre=NULL;
        // cur=head;
        // post= cur->next;
        head->next=NULL;
        head->next->next = head;
        ListNode* h2 = reverseList(head->next);
        // while(cur->next!= NULL)
        // {
        //     cur->next=pre;
        //     pre=cur;
        //     cur=post;
        //     post=post->next;
[
