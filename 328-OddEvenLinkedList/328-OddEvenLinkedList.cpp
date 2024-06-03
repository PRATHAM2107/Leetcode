        ListNode *even = head->next;
        ListNode *even_start = head->next;
        
        while(odd->next && even->next){
            odd->next = even->next; 
            even->next = odd->next->next;  
            odd = odd->next;
            even = even->next;
        }
        odd->next = even_start;   
        return head; 
    }
};
[
