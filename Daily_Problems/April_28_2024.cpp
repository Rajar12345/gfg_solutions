Node* deleteMid(Node* head)
    {
        Node* mid = head; 
        Node* last = head->next;
        if(head->next == NULL) return NULL; // length = 1
        while(last->next && last->next->next){
            mid = mid->next; 
            last = last->next->next; 
        }
        mid->next = mid->next->next; 
        return head;    
    } 
