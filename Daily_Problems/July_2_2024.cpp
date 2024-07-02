bool compute(Node* head) {
        // Your code goes here
        Node* temp = head;
        string s="";
        while(temp){
        s=s+temp->data;
        temp=temp->next;
        }
        
        int l = s.length();
        for(int i=0,j=l-1; i<j; i++,j--){
            if(s[i]!=s[j]){
                return false;
            }
        }
        
        return true;
    }
