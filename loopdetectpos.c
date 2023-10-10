int detechposition(node *h){
    int ans,count=1;
    node  *fast,*slow;
    fast = h;
    slow = h;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            break;
        }
    }
    fast  = h;
    while(fast!=slow){
        count++;
        fast = fast->next;
        slow = slow->next;
    }
    return count;
}