            cur->next=pre;
            pre=cur;
            cur=post;
            post=post->next;
        }
        cur->next=pre;
        return cur;

    }
};
[
