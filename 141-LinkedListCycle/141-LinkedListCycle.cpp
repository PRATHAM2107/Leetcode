        slow = head;
        ListNode * fast;
        fast = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next; 
        }
        return false;
    }
            if(slow==fast)
                return true;   
[
